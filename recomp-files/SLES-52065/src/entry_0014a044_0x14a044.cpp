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

// Function: entry_0014a044
// Address: 0x14a044 - 0x14a0c8
void entry_0014a044_0x14a044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a044_0x14a044");
#endif

    switch (ctx->pc) {
        case 0x14a068u: goto label_14a068;
        default: break;
    }

    ctx->pc = 0x14a044u;

    // 0x14a044: 0x0  nop
    ctx->pc = 0x14a044u;
    // NOP
    // 0x14a048: 0x27b204ec  addiu       $s2, $sp, 0x4EC
    ctx->pc = 0x14a048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
    // 0x14a04c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a050: 0x8fa204cc  lw          $v0, 0x4CC($sp)
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1228)));
    // 0x14a054: 0x1462ffc5  bne         $v1, $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x14A054u;
    {
        const bool branch_taken_0x14a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A054u;
        // 0x14a058: 0x27b104ac  addiu       $s1, $sp, 0x4AC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a054) {
            ctx->pc = 0x149F6Cu;
            return;
        }
    }
    ctx->pc = 0x14A05Cu;
    // 0x14a05c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x14a060: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A060u;
    SET_GPR_U32(ctx, 31, 0x14A068u);
    ctx->pc = 0x14A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A060u;
    // 0x14a064: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A060u, 0x14A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A068u;
label_14a068:
    // 0x14a068: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x14a06c: 0x8fa604ac  lw          $a2, 0x4AC($sp)
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1196)));
    // 0x14a070: 0x8fa504b0  lw          $a1, 0x4B0($sp)
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x14a074: 0x8fa404b4  lw          $a0, 0x4B4($sp)
    ctx->pc = 0x14a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x14a078: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a07c: 0xafa602ec  sw          $a2, 0x2EC($sp)
    ctx->pc = 0x14a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 6));
    // 0x14a080: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x14a084: 0xafa502f0  sw          $a1, 0x2F0($sp)
    ctx->pc = 0x14a084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 5));
    // 0x14a088: 0xafa402f4  sw          $a0, 0x2F4($sp)
    ctx->pc = 0x14a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 4));
    // 0x14a08c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a090: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a094: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x14a098: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a09c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a0a0: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x14a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x14a0a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0a8: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a0ac: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x14a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14a0b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0b4: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a0b8: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x14a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x14a0bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0c0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x14A0C0u;
    {
        const bool branch_taken_0x14a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C0u;
        // 0x14a0c4: 0xafa30164  sw          $v1, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c0) {
            ctx->pc = 0x14A234u;
            return;
        }
    }
    ctx->pc = 0x14A0C8u;
}
