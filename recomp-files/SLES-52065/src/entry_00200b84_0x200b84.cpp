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

// Function: entry_00200b84
// Address: 0x200b84 - 0x200bc4
void entry_00200b84_0x200b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200b84_0x200b84");
#endif

    switch (ctx->pc) {
        case 0x200b90u: goto label_200b90;
        default: break;
    }

    ctx->pc = 0x200b84u;

    // 0x200b84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b88: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x200B88u;
    SET_GPR_U32(ctx, 31, 0x200B90u);
    ctx->pc = 0x200B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B88u;
    // 0x200b8c: 0x2611fff8  addiu       $s1, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x200B88u, 0x200B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B90u;
label_200b90:
    // 0x200b90: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x200b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x200b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200b98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200b9c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200ba0: 0x26440013  addiu       $a0, $s2, 0x13
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x200ba4: 0xa2b824  and         $s7, $a1, $v0
    ctx->pc = 0x200ba4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x200ba8: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x200ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x200bac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200BACu;
    {
        const bool branch_taken_0x200bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BACu;
        // 0x200bb0: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bac) {
            ctx->pc = 0x200BC4u;
            return;
        }
    }
    ctx->pc = 0x200BB4u;
    // 0x200bb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200bb8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x200bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x200bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200BBCu;
    {
        const bool branch_taken_0x200bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BBCu;
        // 0x200bc0: 0x82b024  and         $s6, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bbc) {
            ctx->pc = 0x200BC8u;
            return;
        }
    }
    ctx->pc = 0x200BC4u;
}
