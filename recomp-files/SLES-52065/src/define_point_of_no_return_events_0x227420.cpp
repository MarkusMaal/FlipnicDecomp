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

// Function: define_point_of_no_return_events
// Address: 0x227420 - 0x227524
void define_point_of_no_return_events_0x227420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_point_of_no_return_events_0x227420");
#endif

    switch (ctx->pc) {
        case 0x22744cu: goto label_22744c;
        case 0x227464u: goto label_227464;
        case 0x227488u: goto label_227488;
        case 0x2274a0u: goto label_2274a0;
        case 0x2274c4u: goto label_2274c4;
        case 0x2274dcu: goto label_2274dc;
        case 0x227500u: goto label_227500;
        case 0x227518u: goto label_227518;
        default: break;
    }

    ctx->pc = 0x227420u;

    // 0x227420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227424: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227428: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22742c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227430: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227438: 0x2484df40  addiu       $a0, $a0, -0x20C0
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958912));
    // 0x22743c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227440: 0x24c607b8  addiu       $a2, $a2, 0x7B8
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1976));
    // 0x227444: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227444u;
    SET_GPR_U32(ctx, 31, 0x22744Cu);
    ctx->pc = 0x227448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227444u;
    // 0x227448: 0x24e778f0  addiu       $a3, $a3, 0x78F0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227444u, 0x22744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22744Cu;
label_22744c:
    // 0x22744c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227450: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227458: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22745c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22745Cu;
    SET_GPR_U32(ctx, 31, 0x227464u);
    ctx->pc = 0x227460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22745Cu;
    // 0x227460: 0x24c6df30  addiu       $a2, $a2, -0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22745Cu, 0x227464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227464u;
label_227464:
    // 0x227464: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227468: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22746c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227470: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227474: 0x2484df80  addiu       $a0, $a0, -0x2080
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958976));
    // 0x227478: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x22747c: 0x24c607c8  addiu       $a2, $a2, 0x7C8
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1992));
    // 0x227480: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227480u;
    SET_GPR_U32(ctx, 31, 0x227488u);
    ctx->pc = 0x227484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227480u;
    // 0x227484: 0x24e77b60  addiu       $a3, $a3, 0x7B60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227480u, 0x227488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227488u;
label_227488:
    // 0x227488: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x22748c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227494: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227498: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227498u;
    SET_GPR_U32(ctx, 31, 0x2274A0u);
    ctx->pc = 0x22749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227498u;
    // 0x22749c: 0x24c6df70  addiu       $a2, $a2, -0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227498u, 0x2274A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274A0u;
label_2274a0:
    // 0x2274a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2274a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2274a8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2274ac: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2274acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2274b0: 0x2484dfe0  addiu       $a0, $a0, -0x2020
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959072));
    // 0x2274b4: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2274b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2274b8: 0x24c607e0  addiu       $a2, $a2, 0x7E0
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2016));
    // 0x2274bc: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2274BCu;
    SET_GPR_U32(ctx, 31, 0x2274C4u);
    ctx->pc = 0x2274C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274BCu;
    // 0x2274c0: 0x24e77dc0  addiu       $a3, $a3, 0x7DC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2274BCu, 0x2274C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274C4u;
label_2274c4:
    // 0x2274c4: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2274c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2274c8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2274c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2274cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2274ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274d0: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2274d4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2274D4u;
    SET_GPR_U32(ctx, 31, 0x2274DCu);
    ctx->pc = 0x2274D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274D4u;
    // 0x2274d8: 0x24c6dfc8  addiu       $a2, $a2, -0x2038 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2274D4u, 0x2274DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274DCu;
label_2274dc:
    // 0x2274dc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2274dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2274e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2274e4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2274e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2274e8: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2274e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2274ec: 0x2484e020  addiu       $a0, $a0, -0x1FE0
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959136));
    // 0x2274f0: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2274f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2274f4: 0x24c607f8  addiu       $a2, $a2, 0x7F8
    ctx->pc = 0x2274f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2040));
    // 0x2274f8: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2274F8u;
    SET_GPR_U32(ctx, 31, 0x227500u);
    ctx->pc = 0x2274FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274F8u;
    // 0x2274fc: 0x24e77ef0  addiu       $a3, $a3, 0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2274F8u, 0x227500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227500u;
label_227500:
    // 0x227500: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227504: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22750c: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227510: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227510u;
    SET_GPR_U32(ctx, 31, 0x227518u);
    ctx->pc = 0x227514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227510u;
    // 0x227514: 0x24c6e010  addiu       $a2, $a2, -0x1FF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227510u, 0x227518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22751c: 0x3e00008  jr          $ra
    ctx->pc = 0x22751Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22751Cu;
        // 0x227520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22751Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227524u;
}
