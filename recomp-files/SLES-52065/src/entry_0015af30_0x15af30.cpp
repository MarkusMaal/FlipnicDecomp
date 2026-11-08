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

// Function: entry_0015af30
// Address: 0x15af30 - 0x15af54
void entry_0015af30_0x15af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af30_0x15af30");
#endif

    switch (ctx->pc) {
        case 0x15af50u: goto label_15af50;
        default: break;
    }

    ctx->pc = 0x15af30u;

label_15af30:
    // 0x15af30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15af34:
    // 0x15af34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15af38:
    // 0x15af38: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15af38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15af3c:
    // 0x15af3c: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x15af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15af40:
    // 0x15af40: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15af44:
    // 0x15af44: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_15af48:
    // 0x15af48: 0x320f809  jalr        $t9
label_15af4c:
    if (ctx->pc == 0x15AF4Cu) {
        ctx->pc = 0x15AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF48u;
        // 0x15af4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF50u;
        goto label_15af50;
    }
    ctx->pc = 0x15AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AF50u);
        ctx->pc = 0x15AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF48u;
        // 0x15af4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF48u, 0x15AF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF50u;
label_15af50:
    // 0x15af50: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15af54u;
}
