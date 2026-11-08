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

// Function: entry_0015ac38
// Address: 0x15ac38 - 0x15ac60
void entry_0015ac38_0x15ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ac38_0x15ac38");
#endif

    ctx->pc = 0x15ac38u;

    // 0x15ac38: 0x862201f6  lh          $v0, 0x1F6($s1)
    ctx->pc = 0x15ac38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 502)));
    // 0x15ac3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15ac40: 0xa62201f6  sh          $v0, 0x1F6($s1)
    ctx->pc = 0x15ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ac44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ac48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ac48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15ac4c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15ac4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15ac50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AC50u;
    {
        const bool branch_taken_0x15ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac50) {
            ctx->pc = 0x15AC60u;
            return;
        }
    }
    ctx->pc = 0x15AC58u;
    // 0x15ac58: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x15AC58u;
    {
        const bool branch_taken_0x15ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC58u;
        // 0x15ac5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac58) {
            ctx->pc = 0x15AF88u;
            return;
        }
    }
    ctx->pc = 0x15AC60u;
}
