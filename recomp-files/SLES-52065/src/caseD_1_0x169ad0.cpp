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

// Function: caseD_1
// Address: 0x169ad0 - 0x169b00
void caseD_1_0x169ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x169ad0");
#endif

    switch (ctx->pc) {
        case 0x169ad0u: goto label_169ad0;
        case 0x169ad4u: goto label_169ad4;
        case 0x169ad8u: goto label_169ad8;
        case 0x169adcu: goto label_169adc;
        case 0x169ae0u: goto label_169ae0;
        case 0x169ae4u: goto label_169ae4;
        case 0x169ae8u: goto label_169ae8;
        case 0x169aecu: goto label_169aec;
        case 0x169af0u: goto label_169af0;
        case 0x169af4u: goto label_169af4;
        case 0x169af8u: goto label_169af8;
        case 0x169afcu: goto label_169afc;
        default: break;
    }

    ctx->pc = 0x169ad0u;

label_169ad0:
    // 0x169ad0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_169ad4:
    // 0x169ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169ad8:
    // 0x169ad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_169adc:
    // 0x169adc: 0xc0425a4  jal         func_109690
label_169ae0:
    if (ctx->pc == 0x169AE0u) {
        ctx->pc = 0x169AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169ADCu;
        // 0x169ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AE4u;
        goto label_169ae4;
    }
    ctx->pc = 0x169ADCu;
    SET_GPR_U32(ctx, 31, 0x169AE4u);
    ctx->pc = 0x169AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ADCu;
    // 0x169ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169ADCu, 0x169AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE4u;
label_169ae4:
    // 0x169ae4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169ae8:
    // 0x169ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169aec:
    // 0x169aec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169af0:
    // 0x169af0: 0x320f809  jalr        $t9
label_169af4:
    if (ctx->pc == 0x169AF4u) {
        ctx->pc = 0x169AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF0u;
        // 0x169af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AF8u;
        goto label_169af8;
    }
    ctx->pc = 0x169AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169AF8u);
        ctx->pc = 0x169AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF0u;
        // 0x169af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AF0u, 0x169AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_169afc:
    if (ctx->pc == 0x169AFCu) {
        ctx->pc = 0x169B00u;
        goto label_fallthrough_0x169af8;
    }
    ctx->pc = 0x169AF8u;
    {
        const bool branch_taken_0x169af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169af8) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
label_fallthrough_0x169af8:
    ctx->pc = 0x169B00u;
}
