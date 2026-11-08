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

// Function: entry_0017ffec
// Address: 0x17ffec - 0x180018
void entry_0017ffec_0x17ffec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ffec_0x17ffec");
#endif

    switch (ctx->pc) {
        case 0x17fff4u: goto label_17fff4;
        default: break;
    }

    ctx->pc = 0x17ffecu;

    // 0x17ffec: 0xc05ff9c  jal         func_17FE70
    ctx->pc = 0x17FFECu;
    SET_GPR_U32(ctx, 31, 0x17FFF4u);
    ctx->pc = 0x17FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFECu;
    // 0x17fff0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE70u, 0x17FFECu, 0x17FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFF4u;
label_17fff4:
    // 0x17fff4: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17fff8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x17fffc: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x180000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180004: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x180004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x180008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x180008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18000c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180010: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x180010u;
    SET_GPR_U32(ctx, 31, 0x180018u);
    ctx->pc = 0x180014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180010u;
    // 0x180014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x180010u, 0x180018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180018u;
}
