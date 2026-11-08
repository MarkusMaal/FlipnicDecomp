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

// Function: entry_001fb594
// Address: 0x1fb594 - 0x1fb5d8
void entry_001fb594_0x1fb594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb594_0x1fb594");
#endif

    ctx->pc = 0x1fb594u;

    // 0x1fb594: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x1fb594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x1fb598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb59c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb5a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB5A0u;
    {
        const bool branch_taken_0x1fb5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5A0u;
        // 0x1fb5a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5a0) {
            ctx->pc = 0x1FB5D8u;
            return;
        }
    }
    ctx->pc = 0x1FB5A8u;
    // 0x1fb5a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1fb5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1fb5ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb5b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb5b8: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x1fb5b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1fb5bc: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb5bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb5c0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1fb5c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fb5c4: 0x0  nop
    ctx->pc = 0x1fb5c4u;
    // NOP
    // 0x1fb5c8: 0x0  nop
    ctx->pc = 0x1fb5c8u;
    // NOP
    // 0x1fb5cc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb5ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb5d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB5D0u;
    {
        const bool branch_taken_0x1fb5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB5D0u;
        // 0x1fb5d4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb5d0) {
            ctx->pc = 0x1FB5ECu;
            return;
        }
    }
    ctx->pc = 0x1FB5D8u;
}
