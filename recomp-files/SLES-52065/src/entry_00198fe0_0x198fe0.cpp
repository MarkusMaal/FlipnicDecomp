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

// Function: entry_00198fe0
// Address: 0x198fe0 - 0x19901c
void entry_00198fe0_0x198fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fe0_0x198fe0");
#endif

    ctx->pc = 0x198fe0u;

    // 0x198fe0: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x198fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198fe8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x198fec: 0xac500690  sw          $s0, 0x690($v0)
    ctx->pc = 0x198fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1680), GPR_U32(ctx, 16));
    // 0x198ff0: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x198ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x198ff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198ff8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x198ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x198ffc: 0xac510790  sw          $s1, 0x790($v0)
    ctx->pc = 0x198ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1936), GPR_U32(ctx, 17));
    // 0x199000: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x199004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x199004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x199008: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x199008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x19900c: 0xac400710  sw          $zero, 0x710($v0)
    ctx->pc = 0x19900cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 0));
    // 0x199010: 0x8e820688  lw          $v0, 0x688($s4)
    ctx->pc = 0x199010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x199014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199018: 0xae820688  sw          $v0, 0x688($s4)
    ctx->pc = 0x199018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 2));
    ctx->pc = 0x19901cu;
}
