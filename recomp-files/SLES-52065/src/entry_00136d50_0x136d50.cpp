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

// Function: entry_00136d50
// Address: 0x136d50 - 0x136d80
void entry_00136d50_0x136d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d50_0x136d50");
#endif

    ctx->pc = 0x136d50u;

    // 0x136d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136d58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136D60u;
    {
        const bool branch_taken_0x136d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D60u;
        // 0x136d64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d60) {
            ctx->pc = 0x136D84u;
            return;
        }
    }
    ctx->pc = 0x136D68u;
    // 0x136d68: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x136d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x136d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x136d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x136d70: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136D70u;
    {
        const bool branch_taken_0x136d70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x136d70) {
            ctx->pc = 0x136D80u;
            return;
        }
    }
    ctx->pc = 0x136D78u;
    // 0x136d78: 0xc0401a4  jal         func_100690
    ctx->pc = 0x136D78u;
    SET_GPR_U32(ctx, 31, 0x136D80u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x136D78u, 0x136D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D80u;
}
