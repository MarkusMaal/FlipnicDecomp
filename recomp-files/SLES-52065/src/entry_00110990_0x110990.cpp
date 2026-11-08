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

// Function: entry_00110990
// Address: 0x110990 - 0x1109c4
void entry_00110990_0x110990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110990_0x110990");
#endif

    ctx->pc = 0x110990u;

    // 0x110990: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110994: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x110998: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x110998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11099c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1109a0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1109a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1109a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1109a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1109a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1109a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1109ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1109b0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1109b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1109b4: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1109b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x1109b8: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1109b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1109bc: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x1109bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
    // 0x1109c0: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x1109c4u;
}
