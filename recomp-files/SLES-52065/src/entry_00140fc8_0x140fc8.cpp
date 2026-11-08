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

// Function: entry_00140fc8
// Address: 0x140fc8 - 0x141000
void entry_00140fc8_0x140fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140fc8_0x140fc8");
#endif

    ctx->pc = 0x140fc8u;

    // 0x140fc8: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x140fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x140fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140fd0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x140fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x140fd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140fd8: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x140fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140fdc: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x140fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x140fe0: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x140fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x140fe4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x140fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x140fe8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x140fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x140fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140ff0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x140ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x140ff4: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x140FF4u;
    {
        const bool branch_taken_0x140ff4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x140ff4) {
            ctx->pc = 0x141000u;
            return;
        }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x140ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x141000u;
}
