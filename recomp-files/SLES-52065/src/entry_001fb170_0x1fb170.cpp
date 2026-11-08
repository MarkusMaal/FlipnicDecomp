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

// Function: entry_001fb170
// Address: 0x1fb170 - 0x1fb194
void entry_001fb170_0x1fb170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb170_0x1fb170");
#endif

    ctx->pc = 0x1fb170u;

    // 0x1fb170: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB170u;
    {
        const bool branch_taken_0x1fb170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB170u;
        // 0x1fb174: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb170) {
            ctx->pc = 0x1FB194u;
            return;
        }
    }
    ctx->pc = 0x1FB178u;
    // 0x1fb178: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1fb178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb17c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb180: 0x0  nop
    ctx->pc = 0x1fb180u;
    // NOP
    // 0x1fb184: 0x0  nop
    ctx->pc = 0x1fb184u;
    // NOP
    // 0x1fb188: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1fb188u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1fb18c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1FB18Cu;
    {
        const bool branch_taken_0x1fb18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb18c) {
            ctx->pc = 0x1FB384u;
            return;
        }
    }
    ctx->pc = 0x1FB194u;
}
