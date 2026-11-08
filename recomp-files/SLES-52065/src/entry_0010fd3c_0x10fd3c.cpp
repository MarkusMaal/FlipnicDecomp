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

// Function: entry_0010fd3c
// Address: 0x10fd3c - 0x10fd8c
void entry_0010fd3c_0x10fd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd3c_0x10fd3c");
#endif

    ctx->pc = 0x10fd3cu;

    // 0x10fd3c: 0xae030230  sw          $v1, 0x230($s0)
    ctx->pc = 0x10fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 3));
    // 0x10fd40: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10fd48: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x10fd4c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x10fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x10fd50: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x10FD50u;
    {
        const bool branch_taken_0x10fd50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x10fd50) {
            ctx->pc = 0x10FD8Cu;
            return;
        }
    }
    ctx->pc = 0x10FD58u;
    // 0x10fd58: 0x8f848244  lw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935108)));
    // 0x10fd5c: 0x8f838248  lw          $v1, -0x7DB8($gp)
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935112)));
    // 0x10fd60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10fd64: 0xaf848244  sw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 4));
    // 0x10fd68: 0x8f848244  lw          $a0, -0x7DBC($gp)
    ctx->pc = 0x10fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935108)));
    // 0x10fd6c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x10fd6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10fd70: 0x0  nop
    ctx->pc = 0x10fd70u;
    // NOP
    // 0x10fd74: 0x0  nop
    ctx->pc = 0x10fd74u;
    // NOP
    // 0x10fd78: 0x1810  mfhi        $v1
    ctx->pc = 0x10fd78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x10fd7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FD7Cu;
    {
        const bool branch_taken_0x10fd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd7c) {
            ctx->pc = 0x10FD8Cu;
            return;
        }
    }
    ctx->pc = 0x10FD84u;
    // 0x10fd84: 0x8f838240  lw          $v1, -0x7DC0($gp)
    ctx->pc = 0x10fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935104)));
    // 0x10fd88: 0xac600320  sw          $zero, 0x320($v1)
    ctx->pc = 0x10fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x10fd8cu;
}
