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

// Function: define_crab_events
// Address: 0x2271f0 - 0x227330
void define_crab_events_0x2271f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_crab_events_0x2271f0");
#endif

    switch (ctx->pc) {
        case 0x22721cu: goto label_22721c;
        case 0x227234u: goto label_227234;
        case 0x227258u: goto label_227258;
        case 0x227270u: goto label_227270;
        case 0x227294u: goto label_227294;
        case 0x2272acu: goto label_2272ac;
        case 0x2272d0u: goto label_2272d0;
        case 0x2272e8u: goto label_2272e8;
        case 0x22730cu: goto label_22730c;
        case 0x227324u: goto label_227324;
        default: break;
    }

    ctx->pc = 0x2271f0u;

    // 0x2271f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2271f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2271f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2271f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2271fc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2271fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227200: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227208: 0x2484dd40  addiu       $a0, $a0, -0x22C0
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958400));
    // 0x22720c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x22720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227210: 0x24c60488  addiu       $a2, $a2, 0x488
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1160));
    // 0x227214: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227214u;
    SET_GPR_U32(ctx, 31, 0x22721Cu);
    ctx->pc = 0x227218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227214u;
    // 0x227218: 0x24e726c0  addiu       $a3, $a3, 0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227214u, 0x22721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22721Cu;
label_22721c:
    // 0x22721c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227220: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227228: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22722c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22722Cu;
    SET_GPR_U32(ctx, 31, 0x227234u);
    ctx->pc = 0x227230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22722Cu;
    // 0x227230: 0x24c6dd30  addiu       $a2, $a2, -0x22D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22722Cu, 0x227234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227234u;
label_227234:
    // 0x227234: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227238: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x22723c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x22723cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227240: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x227240u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227244: 0x2484dd80  addiu       $a0, $a0, -0x2280
    ctx->pc = 0x227244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958464));
    // 0x227248: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x227248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x22724c: 0x24c604a0  addiu       $a2, $a2, 0x4A0
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1184));
    // 0x227250: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227250u;
    SET_GPR_U32(ctx, 31, 0x227258u);
    ctx->pc = 0x227254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227250u;
    // 0x227254: 0x24e727f0  addiu       $a3, $a3, 0x27F0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227250u, 0x227258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227258u;
label_227258:
    // 0x227258: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x22725c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227264: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x227268: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x227268u;
    SET_GPR_U32(ctx, 31, 0x227270u);
    ctx->pc = 0x22726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227268u;
    // 0x22726c: 0x24c6dd70  addiu       $a2, $a2, -0x2290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x227268u, 0x227270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227270u;
label_227270:
    // 0x227270: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x227270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x227274: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x227274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x227278: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x227278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x22727c: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x22727cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x227280: 0x2484ddc0  addiu       $a0, $a0, -0x2240
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958528));
    // 0x227284: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227288: 0x24c604b0  addiu       $a2, $a2, 0x4B0
    ctx->pc = 0x227288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1200));
    // 0x22728c: 0xc064028  jal         func_1900A0
    ctx->pc = 0x22728Cu;
    SET_GPR_U32(ctx, 31, 0x227294u);
    ctx->pc = 0x227290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22728Cu;
    // 0x227290: 0x24e72920  addiu       $a3, $a3, 0x2920 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x22728Cu, 0x227294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227294u;
label_227294:
    // 0x227294: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227298: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x22729c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272a0: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2272a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2272a4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2272A4u;
    SET_GPR_U32(ctx, 31, 0x2272ACu);
    ctx->pc = 0x2272A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272A4u;
    // 0x2272a8: 0x24c6ddb0  addiu       $a2, $a2, -0x2250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2272A4u, 0x2272ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272ACu;
label_2272ac:
    // 0x2272ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2272b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2272b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2272b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2272b8: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2272b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2272bc: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
    // 0x2272c0: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2272c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x2272c4: 0x24c604b8  addiu       $a2, $a2, 0x4B8
    ctx->pc = 0x2272c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1208));
    // 0x2272c8: 0xc064028  jal         func_1900A0
    ctx->pc = 0x2272C8u;
    SET_GPR_U32(ctx, 31, 0x2272D0u);
    ctx->pc = 0x2272CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272C8u;
    // 0x2272cc: 0x24e72a60  addiu       $a3, $a3, 0x2A60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x2272C8u, 0x2272D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272D0u;
label_2272d0:
    // 0x2272d0: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x2272d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x2272d4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2272d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2272d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272dc: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2272dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2272e0: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x2272E0u;
    SET_GPR_U32(ctx, 31, 0x2272E8u);
    ctx->pc = 0x2272E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272E0u;
    // 0x2272e4: 0x24c6ddf0  addiu       $a2, $a2, -0x2210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x2272E0u, 0x2272E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272E8u;
label_2272e8:
    // 0x2272e8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2272e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2272ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2272ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2272f0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2272f4: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x2272f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x2272f8: 0x2484de40  addiu       $a0, $a0, -0x21C0
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958656));
    // 0x2272fc: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x227300: 0x24c604c8  addiu       $a2, $a2, 0x4C8
    ctx->pc = 0x227300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1224));
    // 0x227304: 0xc064028  jal         func_1900A0
    ctx->pc = 0x227304u;
    SET_GPR_U32(ctx, 31, 0x22730Cu);
    ctx->pc = 0x227308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227304u;
    // 0x227308: 0x24e72b90  addiu       $a3, $a3, 0x2B90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x227304u, 0x22730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22730Cu;
label_22730c:
    // 0x22730c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x227310: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x227314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227318: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x22731c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x22731Cu;
    SET_GPR_U32(ctx, 31, 0x227324u);
    ctx->pc = 0x227320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22731Cu;
    // 0x227320: 0x24c6de30  addiu       $a2, $a2, -0x21D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x22731Cu, 0x227324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227324u;
label_227324:
    // 0x227324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227328: 0x3e00008  jr          $ra
    ctx->pc = 0x227328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227328u;
        // 0x22732c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227330u;
}
