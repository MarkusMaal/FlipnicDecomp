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

// Function: entry_0015adec
// Address: 0x15adec - 0x15ae14
void entry_0015adec_0x15adec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015adec_0x15adec");
#endif

    switch (ctx->pc) {
        case 0x15ae0cu: goto label_15ae0c;
        default: break;
    }

    ctx->pc = 0x15adecu;

label_15adec:
    // 0x15adec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15adf0:
    // 0x15adf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15adf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adf4:
    // 0x15adf4: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15adf8:
    // 0x15adf8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x15adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15adfc:
    // 0x15adfc: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15ae00:
    // 0x15ae00: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x15ae00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_15ae04:
    // 0x15ae04: 0x320f809  jalr        $t9
label_15ae08:
    if (ctx->pc == 0x15AE08u) {
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE0Cu;
        goto label_15ae0c;
    }
    ctx->pc = 0x15AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AE0Cu);
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE04u, 0x15AE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE0Cu;
label_15ae0c:
    // 0x15ae0c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_15ae10:
    if (ctx->pc == 0x15AE10u) {
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE14u;
        goto label_fallthrough_0x15ae0c;
    }
    ctx->pc = 0x15AE0Cu;
    {
        const bool branch_taken_0x15ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae0c) {
            ctx->pc = 0x15AF80u;
            return;
        }
    }
label_fallthrough_0x15ae0c:
    ctx->pc = 0x15AE14u;
}
