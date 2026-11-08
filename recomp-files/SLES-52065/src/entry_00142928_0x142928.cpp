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

// Function: entry_00142928
// Address: 0x142928 - 0x142940
void entry_00142928_0x142928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142928_0x142928");
#endif

    ctx->pc = 0x142928u;

    // 0x142928: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x142928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x14292c: 0x8fd10038  lw          $s1, 0x38($fp)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x142930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142934: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142938: 0x12340020  beq         $s1, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x142938u;
    {
        const bool branch_taken_0x142938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x142938) {
            ctx->pc = 0x1429BCu;
            return;
        }
    }
    ctx->pc = 0x142940u;
}
