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

// Function: caseD_c
// Address: 0x1c2b1c - 0x1c2b44
void caseD_c_0x1c2b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1c2b1c");
#endif

    ctx->pc = 0x1c2b1cu;

    // 0x1c2b1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2b20: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x1c2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x1c2b24: 0x8c22f5d8  lw          $v0, -0xA28($at)
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5D8u));
    // 0x1c2b28: 0x24036d24  addiu       $v1, $zero, 0x6D24
    ctx->pc = 0x1c2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27940));
    // 0x1c2b2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2b30: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x1c2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x1c2b34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2B34u;
    {
        const bool branch_taken_0x1c2b34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B34u;
        // 0x1c2b38: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b34) {
            ctx->pc = 0x1C2B44u;
            return;
        }
    }
    ctx->pc = 0x1C2B3Cu;
    // 0x1c2b3c: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x1c2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x1c2b40: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    ctx->pc = 0x1c2b44u;
}
