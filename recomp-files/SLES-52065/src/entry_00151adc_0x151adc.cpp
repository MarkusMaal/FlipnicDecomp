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

// Function: entry_00151adc
// Address: 0x151adc - 0x151b1c
void entry_00151adc_0x151adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151adc_0x151adc");
#endif

    switch (ctx->pc) {
        case 0x151af0u: goto label_151af0;
        case 0x151b00u: goto label_151b00;
        case 0x151b10u: goto label_151b10;
        default: break;
    }

    ctx->pc = 0x151adcu;

label_151adc:
    // 0x151adc: 0x0  nop
    ctx->pc = 0x151adcu;
    // NOP
label_151ae0:
    // 0x151ae0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151ae4:
    // 0x151ae4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x151ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_151ae8:
    // 0x151ae8: 0x320f809  jalr        $t9
label_151aec:
    if (ctx->pc == 0x151AECu) {
        ctx->pc = 0x151AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE8u;
        // 0x151aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151AF0u;
        goto label_151af0;
    }
    ctx->pc = 0x151AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151AF0u);
        ctx->pc = 0x151AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AE8u;
        // 0x151aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AE8u, 0x151AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151AF0u;
label_151af0:
    // 0x151af0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151af4:
    // 0x151af4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_151af8:
    // 0x151af8: 0x320f809  jalr        $t9
label_151afc:
    if (ctx->pc == 0x151AFCu) {
        ctx->pc = 0x151AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AF8u;
        // 0x151afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B00u;
        goto label_151b00;
    }
    ctx->pc = 0x151AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B00u);
        ctx->pc = 0x151AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AF8u;
        // 0x151afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AF8u, 0x151B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B00u;
label_151b00:
    // 0x151b00: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x151b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_151b04:
    // 0x151b04: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x151b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151b08:
    // 0x151b08: 0x320f809  jalr        $t9
label_151b0c:
    if (ctx->pc == 0x151B0Cu) {
        ctx->pc = 0x151B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B08u;
        // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B10u;
        goto label_151b10;
    }
    ctx->pc = 0x151B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B10u);
        ctx->pc = 0x151B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B08u;
        // 0x151b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B08u, 0x151B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B10u;
label_151b10:
    // 0x151b10: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x151b10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151b14:
    // 0x151b14: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_151b18:
    if (ctx->pc == 0x151B18u) {
        ctx->pc = 0x151B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B14u;
        // 0x151b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B1Cu;
        goto label_fallthrough_0x151b14;
    }
    ctx->pc = 0x151B14u;
    {
        const bool branch_taken_0x151b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B14u;
        // 0x151b18: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b14) {
            ctx->pc = 0x151B3Cu;
            return;
        }
    }
label_fallthrough_0x151b14:
    ctx->pc = 0x151B1Cu;
}
