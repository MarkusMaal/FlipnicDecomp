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

// Function: FUN_001864b0
// Address: 0x1864b0 - 0x186540
void FUN_001864b0_0x1864b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001864b0_0x1864b0");
#endif

    ctx->pc = 0x1864b0u;

    // 0x1864b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1864b4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1864b8: 0x2442b138  addiu       $v0, $v0, -0x4EC8
    ctx->pc = 0x1864b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947128));
    // 0x1864bc: 0x3c054480  lui         $a1, 0x4480
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17536 << 16));
    // 0x1864c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1864c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1864c4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1864c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1864c8: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x1864c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x1864cc: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1864ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1864d0: 0xac830114  sw          $v1, 0x114($a0)
    ctx->pc = 0x1864d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 3));
    // 0x1864d4: 0x3c094980  lui         $t1, 0x4980
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18816 << 16));
    // 0x1864d8: 0xac820118  sw          $v0, 0x118($a0)
    ctx->pc = 0x1864d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 2));
    // 0x1864dc: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1864dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1864e0: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x1864e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x1864e4: 0x3c084780  lui         $t0, 0x4780
    ctx->pc = 0x1864e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18304 << 16));
    // 0x1864e8: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x1864e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x1864ec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1864f0: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x1864f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x1864f4: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x1864f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1864f8: 0xac850130  sw          $a1, 0x130($a0)
    ctx->pc = 0x1864f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 5));
    // 0x1864fc: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x1864fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x186500: 0xac850134  sw          $a1, 0x134($a0)
    ctx->pc = 0x186500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 5));
    // 0x186504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x186504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186508: 0xac850138  sw          $a1, 0x138($a0)
    ctx->pc = 0x186508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 5));
    // 0x18650c: 0xac8a013c  sw          $t2, 0x13C($a0)
    ctx->pc = 0x18650cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 10));
    // 0x186510: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x186514: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x186514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x186518: 0xac8a0140  sw          $t2, 0x140($a0)
    ctx->pc = 0x186518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 10));
    // 0x18651c: 0x24030233  addiu       $v1, $zero, 0x233
    ctx->pc = 0x18651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 563));
    // 0x186520: 0xac89014c  sw          $t1, 0x14C($a0)
    ctx->pc = 0x186520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 9));
    // 0x186524: 0xac8a0144  sw          $t2, 0x144($a0)
    ctx->pc = 0x186524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 10));
    // 0x186528: 0xac880150  sw          $t0, 0x150($a0)
    ctx->pc = 0x186528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 8));
    // 0x18652c: 0xac870164  sw          $a3, 0x164($a0)
    ctx->pc = 0x18652cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 7));
    // 0x186530: 0xac860168  sw          $a2, 0x168($a0)
    ctx->pc = 0x186530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 6));
    // 0x186534: 0xac850120  sw          $a1, 0x120($a0)
    ctx->pc = 0x186534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 5));
    // 0x186538: 0x3e00008  jr          $ra
    ctx->pc = 0x186538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186538u;
        // 0x18653c: 0xac830124  sw          $v1, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186540u;
}
