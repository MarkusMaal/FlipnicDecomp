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

// Function: entry_001fb4bc
// Address: 0x1fb4bc - 0x1fb510
void entry_001fb4bc_0x1fb4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb4bc_0x1fb4bc");
#endif

    ctx->pc = 0x1fb4bcu;

    // 0x1fb4bc: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x1fb4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x1fb4c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb4c4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb4c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb4c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB4C8u;
    {
        const bool branch_taken_0x1fb4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4C8u;
        // 0x1fb4cc: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4c8) {
            ctx->pc = 0x1FB510u;
            return;
        }
    }
    ctx->pc = 0x1FB4D0u;
    // 0x1fb4d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb4d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fb4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fb4d8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1FB4D8u;
    {
        const bool branch_taken_0x1fb4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D8u;
        // 0x1fb4dc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb4d8) {
            ctx->pc = 0x1FB5ECu;
            return;
        }
    }
    ctx->pc = 0x1FB4E0u;
    // 0x1fb4e0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fb4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fb4e4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fb4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fb4e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb4ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb4f4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1fb4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb4f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb4fc: 0x0  nop
    ctx->pc = 0x1fb4fcu;
    // NOP
    // 0x1fb500: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x1FB500u;
    {
        const bool branch_taken_0x1fb500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb500) {
            ctx->pc = 0x1FB504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB500u;
            // 0x1fb504: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5F0u;
            return;
        }
    }
    ctx->pc = 0x1FB508u;
    // 0x1fb508: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1FB508u;
    {
        const bool branch_taken_0x1fb508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB508u;
        // 0x1fb50c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb508) {
            ctx->pc = 0x1FB6CCu;
            return;
        }
    }
    ctx->pc = 0x1FB510u;
}
