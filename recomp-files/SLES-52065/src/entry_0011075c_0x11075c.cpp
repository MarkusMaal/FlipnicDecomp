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

// Function: entry_0011075c
// Address: 0x11075c - 0x110784
void entry_0011075c_0x11075c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011075c_0x11075c");
#endif

    ctx->pc = 0x11075cu;

    // 0x11075c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11075cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110764: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11076c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11076cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110770: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x110774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11077c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110780: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x110784u;
}
