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

// Function: entry_0010b11c
// Address: 0x10b11c - 0x10b15c
void entry_0010b11c_0x10b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b11c_0x10b11c");
#endif

    ctx->pc = 0x10b11cu;

    // 0x10b11c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b124: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10b128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b12c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B12Cu;
    {
        const bool branch_taken_0x10b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b12c) {
            ctx->pc = 0x10B15Cu;
            return;
        }
    }
    ctx->pc = 0x10B134u;
    // 0x10b134: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b138: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10b13c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b144: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10b144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10b148: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b14c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B14Cu;
    {
        const bool branch_taken_0x10b14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b14c) {
            ctx->pc = 0x10B15Cu;
            return;
        }
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10b154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10b158: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x10b15cu;
}
