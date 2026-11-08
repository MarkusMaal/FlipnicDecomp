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

// Function: entry_0016715c
// Address: 0x16715c - 0x16718c
void entry_0016715c_0x16715c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016715c_0x16715c");
#endif

    switch (ctx->pc) {
        case 0x167188u: goto label_167188;
        default: break;
    }

    ctx->pc = 0x16715cu;

    // 0x16715c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167160: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x167164: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x167164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x167168: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16716c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x167170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16717c: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x16717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167180: 0xc056194  jal         func_158650
    ctx->pc = 0x167180u;
    SET_GPR_U32(ctx, 31, 0x167188u);
    ctx->pc = 0x167184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167180u;
    // 0x167184: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x167180u, 0x167188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167188u;
label_167188:
    // 0x167188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16718cu;
}
