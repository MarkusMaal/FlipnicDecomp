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

// Function: entry_0014745c
// Address: 0x14745c - 0x147494
void entry_0014745c_0x14745c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014745c_0x14745c");
#endif

    ctx->pc = 0x14745cu;

    // 0x14745c: 0x0  nop
    ctx->pc = 0x14745cu;
    // NOP
    // 0x147460: 0x3d3082b  sltu        $at, $fp, $s3
    ctx->pc = 0x147460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x147464: 0x3c1980a  movz        $s3, $fp, $at
    ctx->pc = 0x147464u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 30));
    // 0x147468: 0x2e611388  sltiu       $at, $s3, 0x1388
    ctx->pc = 0x147468u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5000) ? 1 : 0);
    // 0x14746c: 0x102000f0  beqz        $at, . + 4 + (0xF0 << 2)
    ctx->pc = 0x14746Cu;
    {
        const bool branch_taken_0x14746c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14746c) {
            ctx->pc = 0x147830u;
            return;
        }
    }
    ctx->pc = 0x147474u;
    // 0x147474: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x147478: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x147478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14747c: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x14747cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x147480: 0x142000c8  bnez        $at, . + 4 + (0xC8 << 2)
    ctx->pc = 0x147480u;
    {
        const bool branch_taken_0x147480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x147480) {
            ctx->pc = 0x1477A4u;
            return;
        }
    }
    ctx->pc = 0x147488u;
    // 0x147488: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x147488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x14748c: 0x3c024b18  lui         $v0, 0x4B18
    ctx->pc = 0x14748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
    // 0x147490: 0x34429680  ori         $v0, $v0, 0x9680
    ctx->pc = 0x147490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38528);
    ctx->pc = 0x147494u;
}
