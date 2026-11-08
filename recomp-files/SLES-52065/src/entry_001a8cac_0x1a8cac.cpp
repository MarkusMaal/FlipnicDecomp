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

// Function: entry_001a8cac
// Address: 0x1a8cac - 0x1a8cf0
void entry_001a8cac_0x1a8cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8cac_0x1a8cac");
#endif

    switch (ctx->pc) {
        case 0x1a8ce0u: goto label_1a8ce0;
        default: break;
    }

    ctx->pc = 0x1a8cacu;

label_1a8cac:
    // 0x1a8cac: 0x0  nop
    ctx->pc = 0x1a8cacu;
    // NOP
label_1a8cb0:
    // 0x1a8cb0: 0x8ca406b0  lw          $a0, 0x6B0($a1)
    ctx->pc = 0x1a8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1712)));
label_1a8cb4:
    // 0x1a8cb4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8cb8:
    // 0x1a8cb8: 0x24b506b4  addiu       $s5, $a1, 0x6B4
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 1716));
label_1a8cbc:
    // 0x1a8cbc: 0x8ca206b4  lw          $v0, 0x6B4($a1)
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
label_1a8cc0:
    // 0x1a8cc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8cc4:
    // 0x1a8cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8cc8:
    // 0x1a8cc8: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8ccc:
    // 0x1a8ccc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8cd0:
    // 0x1a8cd0: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a8cd4:
    // 0x1a8cd4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8cd8:
    // 0x1a8cd8: 0x320f809  jalr        $t9
label_1a8cdc:
    if (ctx->pc == 0x1A8CDCu) {
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CE0u;
        goto label_1a8ce0;
    }
    ctx->pc = 0x1A8CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8CE0u);
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8CD8u, 0x1A8CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8CE0u;
label_1a8ce0:
    // 0x1a8ce0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a8ce4:
    // 0x1a8ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ce8:
    // 0x1a8ce8: 0xc05eed0  jal         func_17BB40
label_1a8cec:
    if (ctx->pc == 0x1A8CECu) {
        ctx->pc = 0x1A8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CE8u;
        // 0x1a8cec: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CF0u;
        goto label_fallthrough_0x1a8ce8;
    }
    ctx->pc = 0x1A8CE8u;
    SET_GPR_U32(ctx, 31, 0x1A8CF0u);
    ctx->pc = 0x1A8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CE8u;
    // 0x1a8cec: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8CE8u, 0x1A8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1a8ce8:
    ctx->pc = 0x1A8CF0u;
}
