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

// Function: entry_00139cbc
// Address: 0x139cbc - 0x139d0c
void entry_00139cbc_0x139cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139cbc_0x139cbc");
#endif

    switch (ctx->pc) {
        case 0x139cc4u: goto label_139cc4;
        case 0x139cd4u: goto label_139cd4;
        case 0x139ce0u: goto label_139ce0;
        case 0x139cecu: goto label_139cec;
        case 0x139cfcu: goto label_139cfc;
        default: break;
    }

    ctx->pc = 0x139cbcu;

    // 0x139cbc: 0xc080748  jal         func_201D20
    ctx->pc = 0x139CBCu;
    SET_GPR_U32(ctx, 31, 0x139CC4u);
    ctx->pc = 0x139CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CBCu;
    // 0x139cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x139CBCu, 0x139CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CC4u;
label_139cc4:
    // 0x139cc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x139CC4u;
    {
        const bool branch_taken_0x139cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cc4) {
            ctx->pc = 0x139D0Cu;
            return;
        }
    }
    ctx->pc = 0x139CCCu;
    // 0x139ccc: 0xc04c25c  jal         func_130970
    ctx->pc = 0x139CCCu;
    SET_GPR_U32(ctx, 31, 0x139CD4u);
    ctx->pc = 0x130970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130970u, 0x139CCCu, 0x139CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CD4u;
label_139cd4:
    // 0x139cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cd8: 0xc080702  jal         func_201C08
    ctx->pc = 0x139CD8u;
    SET_GPR_U32(ctx, 31, 0x139CE0u);
    ctx->pc = 0x139CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CD8u;
    // 0x139cdc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x139CD8u, 0x139CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CE0u;
label_139ce0:
    // 0x139ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ce4: 0xc080664  jal         func_201990
    ctx->pc = 0x139CE4u;
    SET_GPR_U32(ctx, 31, 0x139CECu);
    ctx->pc = 0x139CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CE4u;
    // 0x139ce8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x139CE4u, 0x139CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CECu;
label_139cec:
    // 0x139cec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x139cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cf4: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x139CF4u;
    SET_GPR_U32(ctx, 31, 0x139CFCu);
    ctx->pc = 0x139CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CF4u;
    // 0x139cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x139CF4u, 0x139CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CFCu;
label_139cfc:
    // 0x139cfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x139cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139d00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x139d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139D04u;
    {
        const bool branch_taken_0x139d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D04u;
        // 0x139d08: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d04) {
            ctx->pc = 0x139D18u;
            return;
        }
    }
    ctx->pc = 0x139D0Cu;
}
