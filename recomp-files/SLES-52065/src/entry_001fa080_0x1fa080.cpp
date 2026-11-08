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

// Function: entry_001fa080
// Address: 0x1fa080 - 0x1fa0d4
void entry_001fa080_0x1fa080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa080_0x1fa080");
#endif

    ctx->pc = 0x1fa080u;

    // 0x1fa080: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1fa080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1fa084: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x1fa084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x1fa088: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fa088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fa08c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FA08Cu;
    {
        const bool branch_taken_0x1fa08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA08Cu;
        // 0x1fa090: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa08c) {
            ctx->pc = 0x1FA17Cu;
            return;
        }
    }
    ctx->pc = 0x1FA094u;
    // 0x1fa094: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA094u;
    {
        const bool branch_taken_0x1fa094 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA094u;
        // 0x1fa098: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa094) {
            ctx->pc = 0x1FA10Cu;
            return;
        }
    }
    ctx->pc = 0x1FA09Cu;
    // 0x1fa09c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1fa09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1fa0a0: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1fa0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1fa0a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa0a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fa0ac: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1fa0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1fa0b0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1fa0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1fa0b4: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x1fa0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x1fa0b8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA0B8u;
    {
        const bool branch_taken_0x1fa0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0B8u;
        // 0x1fa0bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0b8) {
            ctx->pc = 0x1FA0D4u;
            return;
        }
    }
    ctx->pc = 0x1FA0C0u;
    // 0x1fa0c0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1fa0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1fa0c4: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1fa0c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1fa0c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fa0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa0cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA0CCu;
    {
        const bool branch_taken_0x1fa0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0CCu;
        // 0x1fa0d0: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0cc) {
            ctx->pc = 0x1FA0F4u;
            return;
        }
    }
    ctx->pc = 0x1FA0D4u;
}
