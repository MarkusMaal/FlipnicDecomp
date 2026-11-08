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

// Function: entry_00112284
// Address: 0x112284 - 0x1122c0
void entry_00112284_0x112284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112284_0x112284");
#endif

    ctx->pc = 0x112284u;

    // 0x112284: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x112284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x112288: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11228c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x112290: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x112290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x112294: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x112294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x112298: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x112298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11229c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1122a0: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1122a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1122a4: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1122a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1122a8: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1122a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1122ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1122ACu;
    {
        const bool branch_taken_0x1122ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1122ac) {
            ctx->pc = 0x1122C0u;
            return;
        }
    }
    ctx->pc = 0x1122B4u;
    // 0x1122b4: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x1122b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1122b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1122b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1122bc: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x1122bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x1122c0u;
}
