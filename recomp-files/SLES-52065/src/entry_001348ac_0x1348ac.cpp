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

// Function: entry_001348ac
// Address: 0x1348ac - 0x1348f8
void entry_001348ac_0x1348ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001348ac_0x1348ac");
#endif

    switch (ctx->pc) {
        case 0x1348b4u: goto label_1348b4;
        case 0x1348c4u: goto label_1348c4;
        default: break;
    }

    ctx->pc = 0x1348acu;

    // 0x1348ac: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1348ACu;
    SET_GPR_U32(ctx, 31, 0x1348B4u);
    ctx->pc = 0x1348B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348ACu;
    // 0x1348b0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1348ACu, 0x1348B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348B4u;
label_1348b4:
    // 0x1348b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1348B4u;
    {
        const bool branch_taken_0x1348b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348B4u;
        // 0x1348b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348b4) {
            ctx->pc = 0x1348F8u;
            return;
        }
    }
    ctx->pc = 0x1348BCu;
    // 0x1348bc: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1348BCu;
    SET_GPR_U32(ctx, 31, 0x1348C4u);
    ctx->pc = 0x1348C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348BCu;
    // 0x1348c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x1348BCu, 0x1348C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348C4u;
label_1348c4:
    // 0x1348c4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1348c8: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
    // 0x1348cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1348ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1348d0: 0xa2a00090  sb          $zero, 0x90($s5)
    ctx->pc = 0x1348d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x1348d4: 0xaea0009c  sw          $zero, 0x9C($s5)
    ctx->pc = 0x1348d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 0));
    // 0x1348d8: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x1348d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    // 0x1348dc: 0xaea0008c  sw          $zero, 0x8C($s5)
    ctx->pc = 0x1348dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 0));
    // 0x1348e0: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x1348e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
    // 0x1348e4: 0xaea000a8  sw          $zero, 0xA8($s5)
    ctx->pc = 0x1348e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 0));
    // 0x1348e8: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x1348e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
    // 0x1348ec: 0xa2a00093  sb          $zero, 0x93($s5)
    ctx->pc = 0x1348ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x1348f0: 0xaea00094  sw          $zero, 0x94($s5)
    ctx->pc = 0x1348f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
    // 0x1348f4: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x1348f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
    ctx->pc = 0x1348f8u;
}
