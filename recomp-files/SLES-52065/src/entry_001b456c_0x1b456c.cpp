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

// Function: entry_001b456c
// Address: 0x1b456c - 0x1b45c8
void entry_001b456c_0x1b456c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b456c_0x1b456c");
#endif

    ctx->pc = 0x1b456cu;

    // 0x1b456c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1b456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1b4570: 0x3197e  dsrl32      $v1, $v1, 5
    ctx->pc = 0x1b4570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 5));
    // 0x1b4574: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1b4574u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1b4578: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1b4578u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b457c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1b457cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1b4580: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x1b4580u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x1b4584: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1b4584u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1b4588: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1b4588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1b458c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b4590: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4594: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1b4594u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4598: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x1b4598u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x1b459c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b45a4: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x1b45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
    // 0x1b45a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b45acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b45b0: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x1b45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x1b45b4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1b45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b45b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b45bc: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1b45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1b45c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B45C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45C0u;
        // 0x1b45c4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B45C8u;
}
