#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011cda8
// Address: 0x11cda8 - 0x11ce20
void entry_0011cda8_0x11cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cda8_0x11cda8");
#endif

    switch (ctx->pc) {
        case 0x11cdb0u: goto label_11cdb0;
        case 0x11cdbcu: goto label_11cdbc;
        case 0x11cdc4u: goto label_11cdc4;
        case 0x11ce08u: goto label_11ce08;
        default: break;
    }

    ctx->pc = 0x11cda8u;

    // 0x11cda8: 0xc047be8  jal         func_11EFA0
    ctx->pc = 0x11CDA8u;
    SET_GPR_U32(ctx, 31, 0x11CDB0u);
    ctx->pc = 0x11CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDA8u;
    // 0x11cdac: 0x26240424  addiu       $a0, $s1, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFA0u, 0x11CDA8u, 0x11CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDB0u;
label_11cdb0:
    // 0x11cdb0: 0x8e300338  lw          $s0, 0x338($s1)
    ctx->pc = 0x11cdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x11cdb4: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x11CDB4u;
    SET_GPR_U32(ctx, 31, 0x11CDBCu);
    ctx->pc = 0x11CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDB4u;
    // 0x11cdb8: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x11CDB4u, 0x11CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDBCu;
label_11cdbc:
    // 0x11cdbc: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11CDBCu;
    SET_GPR_U32(ctx, 31, 0x11CDC4u);
    ctx->pc = 0x11CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDBCu;
    // 0x11cdc0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11CDBCu, 0x11CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDC4u;
label_11cdc4:
    // 0x11cdc4: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x11cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x11cdc8: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11cdcc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x11cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x11cdd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cdd4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x11cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x11cdd8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x11cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x11cddc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x11cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x11cde0: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x11cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x11cde4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x11cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x11cde8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x11cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x11cdec: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x11cdf0: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x11cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x11cdf4: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x11cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x11cdf8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11cdfc: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11ce00: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11CE00u;
    SET_GPR_U32(ctx, 31, 0x11CE08u);
    ctx->pc = 0x11CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE00u;
    // 0x11ce04: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11CE00u, 0x11CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE08u;
label_11ce08:
    // 0x11ce08: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11ce0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CE0Cu;
    {
        const bool branch_taken_0x11ce0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ce0c) {
            ctx->pc = 0x11CE20u;
            return;
        }
    }
    ctx->pc = 0x11CE14u;
    // 0x11ce14: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11ce18: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11ce1c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x11ce20u;
}
