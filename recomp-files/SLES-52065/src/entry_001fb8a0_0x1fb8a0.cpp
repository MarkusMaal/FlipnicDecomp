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

// Function: entry_001fb8a0
// Address: 0x1fb8a0 - 0x1fb8d8
void entry_001fb8a0_0x1fb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb8a0_0x1fb8a0");
#endif

    ctx->pc = 0x1fb8a0u;

    // 0x1fb8a0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fb8a4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fb8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fb8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb8ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fb8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb8b0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1fb8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb8b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb8b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1FB8B8u;
    {
        const bool branch_taken_0x1fb8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb8b8) {
            ctx->pc = 0x1FB8F0u;
            return;
        }
    }
    ctx->pc = 0x1FB8C0u;
    // 0x1fb8c0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB8C0u;
    {
        const bool branch_taken_0x1fb8c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C0u;
        // 0x1fb8c4: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8c0) {
            ctx->pc = 0x1FB8D8u;
            return;
        }
    }
    ctx->pc = 0x1FB8C8u;
    // 0x1fb8c8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fb8cc: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x1fb8ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb8d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb8d4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1fb8d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    ctx->pc = 0x1fb8d8u;
}
