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

// Function: entry_0014a234
// Address: 0x14a234 - 0x14a268
void entry_0014a234_0x14a234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a234_0x14a234");
#endif

    ctx->pc = 0x14a234u;

    // 0x14a234: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14a238: 0x27a70580  addiu       $a3, $sp, 0x580
    ctx->pc = 0x14a238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    // 0x14a23c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x14a23cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a240: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x14a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14a244: 0x27a50560  addiu       $a1, $sp, 0x560
    ctx->pc = 0x14a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
    // 0x14a248: 0xdc840010  ld          $a0, 0x10($a0)
    ctx->pc = 0x14a248u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14a24c: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x14a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x14a250: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x14a250u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x14a254: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x14a254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a258: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a258u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a25c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x14a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x14a260: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14A260u;
    {
        const bool branch_taken_0x14a260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A260u;
        // 0x14a264: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a260) {
            ctx->pc = 0x14A2D4u;
            return;
        }
    }
    ctx->pc = 0x14A268u;
}
