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

// Function: entry_001ab944
// Address: 0x1ab944 - 0x1ab968
void entry_001ab944_0x1ab944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab944_0x1ab944");
#endif

    ctx->pc = 0x1ab944u;

    // 0x1ab944: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ab948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab94c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ab950: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ab954: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ab954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ab958: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1ab95c: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1ab960: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1ab960u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1ab964: 0xa0820024  sb          $v0, 0x24($a0)
    ctx->pc = 0x1ab964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ab968u;
}
