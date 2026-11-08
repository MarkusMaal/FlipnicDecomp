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

// Function: entry_00100af8
// Address: 0x100af8 - 0x100b40
void entry_00100af8_0x100af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100af8_0x100af8");
#endif

    switch (ctx->pc) {
        case 0x100b0cu: goto label_100b0c;
        case 0x100b20u: goto label_100b20;
        case 0x100b38u: goto label_100b38;
        default: break;
    }

    ctx->pc = 0x100af8u;

label_100af8:
    // 0x100af8: 0x9242007b  lbu         $v0, 0x7B($s2)
    ctx->pc = 0x100af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 123)));
label_100afc:
    // 0x100afc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_100b00:
    if (ctx->pc == 0x100B00u) {
        ctx->pc = 0x100B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AFCu;
        // 0x100b00: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B04u;
        goto label_100b04;
    }
    ctx->pc = 0x100AFCu;
    {
        const bool branch_taken_0x100afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AFCu;
        // 0x100b00: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100afc) {
            ctx->pc = 0x100B40u;
            return;
        }
    }
    ctx->pc = 0x100B04u;
label_100b04:
    // 0x100b04: 0xc05622c  jal         func_1588B0
label_100b08:
    if (ctx->pc == 0x100B08u) {
        ctx->pc = 0x100B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B04u;
        // 0x100b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B0Cu;
        goto label_100b0c;
    }
    ctx->pc = 0x100B04u;
    SET_GPR_U32(ctx, 31, 0x100B0Cu);
    ctx->pc = 0x100B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B04u;
    // 0x100b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100B04u, 0x100B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B0Cu;
label_100b0c:
    // 0x100b0c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b10:
    // 0x100b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b14:
    // 0x100b14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b18:
    // 0x100b18: 0x320f809  jalr        $t9
label_100b1c:
    if (ctx->pc == 0x100B1Cu) {
        ctx->pc = 0x100B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B18u;
        // 0x100b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B20u;
        goto label_100b20;
    }
    ctx->pc = 0x100B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B20u);
        ctx->pc = 0x100B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B18u;
        // 0x100b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B18u, 0x100B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B20u;
label_100b20:
    // 0x100b20: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b24:
    // 0x100b24: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x100b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_100b28:
    // 0x100b28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b2c:
    // 0x100b2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100b30:
    // 0x100b30: 0x320f809  jalr        $t9
label_100b34:
    if (ctx->pc == 0x100B34u) {
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B38u;
        goto label_100b38;
    }
    ctx->pc = 0x100B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B38u);
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B30u, 0x100B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B38u;
label_100b38:
    // 0x100b38: 0x10000040  b           . + 4 + (0x40 << 2)
label_100b3c:
    if (ctx->pc == 0x100B3Cu) {
        ctx->pc = 0x100B40u;
        goto label_fallthrough_0x100b38;
    }
    ctx->pc = 0x100B38u;
    {
        const bool branch_taken_0x100b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b38) {
            ctx->pc = 0x100C3Cu;
            return;
        }
    }
label_fallthrough_0x100b38:
    ctx->pc = 0x100B40u;
}
