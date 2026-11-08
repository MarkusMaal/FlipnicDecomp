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

// Function: entry_001fdb44
// Address: 0x1fdb44 - 0x1fdb68
void entry_001fdb44_0x1fdb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb44_0x1fdb44");
#endif

    ctx->pc = 0x1fdb44u;

    // 0x1fdb44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fdb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdb48: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1fdb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1fdb4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1fdb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fdb50: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x1fdb50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdb54: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDB54u;
    {
        const bool branch_taken_0x1fdb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb54) {
            ctx->pc = 0x1FDB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB54u;
            // 0x1fdb58: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB88u;
            return;
        }
    }
    ctx->pc = 0x1FDB5Cu;
    // 0x1fdb5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1fdb60: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x1fdb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x1fdb64: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x1fdb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->pc = 0x1fdb68u;
}
