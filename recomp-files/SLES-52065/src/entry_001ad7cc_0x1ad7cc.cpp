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

// Function: entry_001ad7cc
// Address: 0x1ad7cc - 0x1ad824
void entry_001ad7cc_0x1ad7cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad7cc_0x1ad7cc");
#endif

    switch (ctx->pc) {
        case 0x1ad7f4u: goto label_1ad7f4;
        default: break;
    }

    ctx->pc = 0x1ad7ccu;

label_1ad7cc:
    // 0x1ad7cc: 0xae2006c8  sw          $zero, 0x6C8($s1)
    ctx->pc = 0x1ad7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 0));
label_1ad7d0:
    // 0x1ad7d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ad7d4:
    // 0x1ad7d4: 0xae2007f8  sw          $zero, 0x7F8($s1)
    ctx->pc = 0x1ad7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 0));
label_1ad7d8:
    // 0x1ad7d8: 0xae2207fc  sw          $v0, 0x7FC($s1)
    ctx->pc = 0x1ad7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2044), GPR_U32(ctx, 2));
label_1ad7dc:
    // 0x1ad7dc: 0xae200800  sw          $zero, 0x800($s1)
    ctx->pc = 0x1ad7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 0));
label_1ad7e0:
    // 0x1ad7e0: 0x8e2407f4  lw          $a0, 0x7F4($s1)
    ctx->pc = 0x1ad7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad7e4:
    // 0x1ad7e4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ad7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ad7e8:
    // 0x1ad7e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ad7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ad7ec:
    // 0x1ad7ec: 0x320f809  jalr        $t9
label_1ad7f0:
    if (ctx->pc == 0x1AD7F0u) {
        ctx->pc = 0x1AD7F4u;
        goto label_1ad7f4;
    }
    ctx->pc = 0x1AD7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AD7F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD7ECu, 0x1AD7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD7F4u;
label_1ad7f4:
    // 0x1ad7f4: 0x8e2506b8  lw          $a1, 0x6B8($s1)
    ctx->pc = 0x1ad7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1720)));
label_1ad7f8:
    // 0x1ad7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad7fc:
    // 0x1ad7fc: 0x8e260690  lw          $a2, 0x690($s1)
    ctx->pc = 0x1ad7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1ad800:
    // 0x1ad800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad804:
    // 0x1ad804: 0x8e270670  lw          $a3, 0x670($s1)
    ctx->pc = 0x1ad804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
label_1ad808:
    // 0x1ad808: 0x8e2207f4  lw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad80c:
    // 0x1ad80c: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1ad80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
label_1ad810:
    // 0x1ad810: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1ad810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_1ad814:
    // 0x1ad814: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1ad814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1ad818:
    // 0x1ad818: 0x8e2207f4  lw          $v0, 0x7F4($s1)
    ctx->pc = 0x1ad818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2036)));
label_1ad81c:
    // 0x1ad81c: 0xc063e14  jal         func_18F850
label_1ad820:
    if (ctx->pc == 0x1AD820u) {
        ctx->pc = 0x1AD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD81Cu;
        // 0x1ad820: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD824u;
        goto label_fallthrough_0x1ad81c;
    }
    ctx->pc = 0x1AD81Cu;
    SET_GPR_U32(ctx, 31, 0x1AD824u);
    ctx->pc = 0x1AD820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD81Cu;
    // 0x1ad820: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD81Cu, 0x1AD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1ad81c:
    ctx->pc = 0x1AD824u;
}
