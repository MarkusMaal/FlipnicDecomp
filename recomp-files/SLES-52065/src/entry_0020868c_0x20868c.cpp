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

// Function: entry_0020868c
// Address: 0x20868c - 0x2086b0
void entry_0020868c_0x20868c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020868c_0x20868c");
#endif

    ctx->pc = 0x20868cu;

    // 0x20868c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x20868cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208694: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x208698: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x208698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20869c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20869Cu;
        // 0x2086a0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x2086D4u;
            return;
        }
    }
    ctx->pc = 0x2086A4u;
    // 0x2086a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2086a8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2086a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2086ac: 0x0  nop
    ctx->pc = 0x2086acu;
    // NOP
    ctx->pc = 0x2086b0u;
}
