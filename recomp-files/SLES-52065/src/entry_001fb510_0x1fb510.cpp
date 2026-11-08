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

// Function: entry_001fb510
// Address: 0x1fb510 - 0x1fb570
void entry_001fb510_0x1fb510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb510_0x1fb510");
#endif

    switch (ctx->pc) {
        case 0x1fb518u: goto label_1fb518;
        default: break;
    }

    ctx->pc = 0x1fb510u;

    // 0x1fb510: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FB510u;
    SET_GPR_U32(ctx, 31, 0x1FB518u);
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FB510u, 0x1FB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB518u;
label_1fb518:
    // 0x1fb518: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1fb518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x1fb51c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb520: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb524: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB524u;
    {
        const bool branch_taken_0x1fb524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB524u;
        // 0x1fb528: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb524) {
            ctx->pc = 0x1FB594u;
            return;
        }
    }
    ctx->pc = 0x1FB52Cu;
    // 0x1fb52c: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1fb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x1fb530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb534: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb538: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB538u;
    {
        const bool branch_taken_0x1fb538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB538u;
        // 0x1fb53c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb538) {
            ctx->pc = 0x1FB570u;
            return;
        }
    }
    ctx->pc = 0x1FB540u;
    // 0x1fb540: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x1fb540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1fb544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb54c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1fb550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb554: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb558: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x1fb558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1fb55c: 0x0  nop
    ctx->pc = 0x1fb55cu;
    // NOP
    // 0x1fb560: 0x0  nop
    ctx->pc = 0x1fb560u;
    // NOP
    // 0x1fb564: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb564u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb568: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB568u;
        // 0x1fb56c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB5F0u;
            return;
        }
    }
    ctx->pc = 0x1FB570u;
}
