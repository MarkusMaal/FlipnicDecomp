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

// Function: entry_00207e54
// Address: 0x207e54 - 0x207e98
void entry_00207e54_0x207e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207e54_0x207e54");
#endif

    ctx->pc = 0x207e54u;

    // 0x207e54: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x207E54u;
    {
        const bool branch_taken_0x207e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E54u;
        // 0x207e58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e54) {
            ctx->pc = 0x207DE0u;
            return;
        }
    }
    ctx->pc = 0x207E5Cu;
    // 0x207e5c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x207e60: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x207e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x207e64: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x207e64u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x207e68: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x207e6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x207e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x207e70: 0x32023  negu        $a0, $v1
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x207e74: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x207e74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x207e78: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x207e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x207e7c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x207E7Cu;
    {
        const bool branch_taken_0x207e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E7Cu;
        // 0x207e80: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e7c) {
            ctx->pc = 0x207EF4u;
            return;
        }
    }
    ctx->pc = 0x207E84u;
    // 0x207e84: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x207e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207e88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x207E88u;
    {
        const bool branch_taken_0x207e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207E88u;
        // 0x207e8c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207e88) {
            ctx->pc = 0x207EBCu;
            return;
        }
    }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x207e94: 0x0  nop
    ctx->pc = 0x207e94u;
    // NOP
    ctx->pc = 0x207e98u;
}
