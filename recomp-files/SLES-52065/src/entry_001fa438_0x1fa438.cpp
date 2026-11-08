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

// Function: entry_001fa438
// Address: 0x1fa438 - 0x1fa46c
void entry_001fa438_0x1fa438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa438_0x1fa438");
#endif

    ctx->pc = 0x1fa438u;

    // 0x1fa438: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FA438u;
    {
        const bool branch_taken_0x1fa438 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1FA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA438u;
        // 0x1fa43c: 0x535c3  sra         $a2, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa438) {
            ctx->pc = 0x1FA474u;
            return;
        }
    }
    ctx->pc = 0x1FA440u;
    // 0x1fa440: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1fa444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa448: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1fa448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1fa44c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA44Cu;
    {
        const bool branch_taken_0x1fa44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA44Cu;
        // 0x1fa450: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa44c) {
            ctx->pc = 0x1FA46Cu;
            return;
        }
    }
    ctx->pc = 0x1FA454u;
    // 0x1fa454: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA454u;
    {
        const bool branch_taken_0x1fa454 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1fa454) {
            ctx->pc = 0x1FA474u;
            return;
        }
    }
    ctx->pc = 0x1FA45Cu;
    // 0x1fa45c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1fa45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x1fa460: 0x0  nop
    ctx->pc = 0x1fa460u;
    // NOP
    // 0x1fa464: 0x0  nop
    ctx->pc = 0x1fa464u;
    // NOP
    // 0x1fa468: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1fa468u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    ctx->pc = 0x1fa46cu;
}
