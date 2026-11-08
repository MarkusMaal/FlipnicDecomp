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

// Function: entry_0011db94
// Address: 0x11db94 - 0x11dc14
void entry_0011db94_0x11db94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011db94_0x11db94");
#endif

    switch (ctx->pc) {
        case 0x11dbbcu: goto label_11dbbc;
        case 0x11dbc4u: goto label_11dbc4;
        case 0x11dbccu: goto label_11dbcc;
        case 0x11dc0cu: goto label_11dc0c;
        default: break;
    }

    ctx->pc = 0x11db94u;

    // 0x11db94: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x11db94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
    // 0x11db98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db9c: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x11db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
    // 0x11dba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dba4: 0xae4000b0  sw          $zero, 0xB0($s2)
    ctx->pc = 0x11dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x11dba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11dba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbac: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x11dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x11dbb0: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x11dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x11dbb4: 0xc047744  jal         func_11DD10
    ctx->pc = 0x11DBB4u;
    SET_GPR_U32(ctx, 31, 0x11DBBCu);
    ctx->pc = 0x11DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBB4u;
    // 0x11dbb8: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD10u, 0x11DBB4u, 0x11DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBBCu;
label_11dbbc:
    // 0x11dbbc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x11DBBCu;
    SET_GPR_U32(ctx, 31, 0x11DBC4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x11DBBCu, 0x11DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBC4u;
label_11dbc4:
    // 0x11dbc4: 0xc0629b8  jal         func_18A6E0
    ctx->pc = 0x11DBC4u;
    SET_GPR_U32(ctx, 31, 0x11DBCCu);
    ctx->pc = 0x11DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBC4u;
    // 0x11dbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A6E0u, 0x11DBC4u, 0x11DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBCCu;
label_11dbcc:
    // 0x11dbcc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11dbd0: 0x3c038102  lui         $v1, 0x8102
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33026 << 16));
    // 0x11dbd4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x11dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11dbd8: 0x34620409  ori         $v0, $v1, 0x409
    ctx->pc = 0x11dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1033);
    // 0x11dbdc: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11dbe0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11dbe4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11dbe8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x11dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11dbec: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x11dbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11dbf0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x11dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x11dbf4: 0x0  nop
    ctx->pc = 0x11dbf4u;
    // NOP
    // 0x11dbf8: 0x1010  mfhi        $v0
    ctx->pc = 0x11dbf8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11dbfc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x11dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11dc00: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x11dc00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x11dc04: 0xc074fc2  jal         func_1D3F08
    ctx->pc = 0x11DC04u;
    SET_GPR_U32(ctx, 31, 0x11DC0Cu);
    ctx->pc = 0x11DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC04u;
    // 0x11dc08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x11DC04u, 0x11DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC0Cu;
label_11dc0c:
    // 0x11dc0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11DC0Cu;
    {
        const bool branch_taken_0x11dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc0c) {
            ctx->pc = 0x11DC28u;
            return;
        }
    }
    ctx->pc = 0x11DC14u;
}
