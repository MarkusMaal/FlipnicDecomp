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

// Function: FUN_001fb900
// Address: 0x1fb900 - 0x1fb924
void FUN_001fb900_0x1fb900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb900_0x1fb900");
#endif

    ctx->pc = 0x1fb900u;

    // 0x1fb900: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1fb900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb904: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1fb904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb908: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb90c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1fb90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1fb910: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x1fb914: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb918: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb91c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB91Cu;
        // 0x1fb920: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB924u;
}
