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

// Function: entry_0012422c
// Address: 0x12422c - 0x124260
void entry_0012422c_0x12422c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012422c_0x12422c");
#endif

    ctx->pc = 0x12422cu;

    // 0x12422c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x124230: 0x16e20019  bne         $s7, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x124230u;
    {
        const bool branch_taken_0x124230 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x124230) {
            ctx->pc = 0x124298u;
            return;
        }
    }
    ctx->pc = 0x124238u;
    // 0x124238: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x124238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12423c: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x12423cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x124240: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x124240u;
    {
        const bool branch_taken_0x124240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124240) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x124248u;
    // 0x124248: 0xde840060  ld          $a0, 0x60($s4)
    ctx->pc = 0x124248u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x12424c: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x12424cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x124250: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x124250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
    // 0x124254: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x124254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x124258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12425c: 0xfe820060  sd          $v0, 0x60($s4)
    ctx->pc = 0x12425cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 2));
    ctx->pc = 0x124260u;
}
