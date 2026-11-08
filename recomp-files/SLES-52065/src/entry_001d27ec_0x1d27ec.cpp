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

// Function: entry_001d27ec
// Address: 0x1d27ec - 0x1d28d8
void entry_001d27ec_0x1d27ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d27ec_0x1d27ec");
#endif

    switch (ctx->pc) {
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28c4u: goto label_1d28c4;
        default: break;
    }

    ctx->pc = 0x1d27ecu;

    // 0x1d27ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d27f0: 0x2484ff10  addiu       $a0, $a0, -0xF0
    ctx->pc = 0x1d27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967056));
    // 0x1d27f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D27F4u;
    SET_GPR_U32(ctx, 31, 0x1D27FCu);
    ctx->pc = 0x1D27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27F4u;
    // 0x1d27f8: 0x24a53588  addiu       $a1, $a1, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D27F4u, 0x1D27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27FCu;
label_1d27fc:
    // 0x1d27fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d27fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2800: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2804: 0x8c259a78  lw          $a1, -0x6588($at)
    ctx->pc = 0x1d2804u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A78u));
    // 0x1d2808: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2808u;
    SET_GPR_U32(ctx, 31, 0x1D2810u);
    ctx->pc = 0x1D280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2808u;
    // 0x1d280c: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2808u, 0x1D2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2810u;
label_1d2810:
    // 0x1d2810: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d2814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2818: 0xa423ff16  sh          $v1, -0xEA($at)
    ctx->pc = 0x1d2818u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FF16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x36FF16u, _value); } while (0);
    // 0x1d281c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2820: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2824: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d2828: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d282c: 0x2484ff20  addiu       $a0, $a0, -0xE0
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x1d2830: 0xac22ff1c  sw          $v0, -0xE4($at)
    ctx->pc = 0x1d2830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FF1Cu, _value); } while (0);
    // 0x1d2834: 0x24a59a80  addiu       $a1, $a1, -0x6580
    ctx->pc = 0x1d2834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
    // 0x1d2838: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D2838u;
    SET_GPR_U32(ctx, 31, 0x1D2840u);
    ctx->pc = 0x1D283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2838u;
    // 0x1d283c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D2838u, 0x1D2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2840u;
label_1d2840:
    // 0x1d2840: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2844: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2848: 0x2484ff60  addiu       $a0, $a0, -0xA0
    ctx->pc = 0x1d2848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
    // 0x1d284c: 0x24a59ac0  addiu       $a1, $a1, -0x6540
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941376));
    // 0x1d2850: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D2850u;
    SET_GPR_U32(ctx, 31, 0x1D2858u);
    ctx->pc = 0x1D2854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2850u;
    // 0x1d2854: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D2850u, 0x1D2858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2858u;
label_1d2858:
    // 0x1d2858: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d285c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2860: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x1d2864: 0x24a59af0  addiu       $a1, $a1, -0x6510
    ctx->pc = 0x1d2864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941424));
    // 0x1d2868: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D2868u;
    SET_GPR_U32(ctx, 31, 0x1D2870u);
    ctx->pc = 0x1D286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2868u;
    // 0x1d286c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D2868u, 0x1D2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2870u;
label_1d2870:
    // 0x1d2870: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2874: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2878: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x1d2878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x1d287c: 0x24a59b20  addiu       $a1, $a1, -0x64E0
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    // 0x1d2880: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D2880u;
    SET_GPR_U32(ctx, 31, 0x1D2888u);
    ctx->pc = 0x1D2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2880u;
    // 0x1d2884: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D2880u, 0x1D2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2888u;
label_1d2888:
    // 0x1d2888: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d288c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2890: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2894: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2894u;
    SET_GPR_U32(ctx, 31, 0x1D289Cu);
    ctx->pc = 0x1D2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2894u;
    // 0x1d2898: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2894u, 0x1D289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D289Cu;
label_1d289c:
    // 0x1d289c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d28a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d28a4: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d28a8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D28A8u;
    SET_GPR_U32(ctx, 31, 0x1D28B0u);
    ctx->pc = 0x1D28ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A8u;
    // 0x1d28ac: 0x24840054  addiu       $a0, $a0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D28A8u, 0x1D28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B0u;
label_1d28b0:
    // 0x1d28b0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d28b4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d28b8: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d28b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d28bc: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D28BCu;
    SET_GPR_U32(ctx, 31, 0x1D28C4u);
    ctx->pc = 0x1D28C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28BCu;
    // 0x1d28c0: 0x24840094  addiu       $a0, $a0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D28BCu, 0x1D28C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C4u;
label_1d28c4:
    // 0x1d28c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d28c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d28d0: 0x2442ff10  addiu       $v0, $v0, -0xF0
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967056));
    // 0x1d28d4: 0xac2302d8  sw          $v1, 0x2D8($at)
    ctx->pc = 0x1d28d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3702D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3702D8u, _value); } while (0);
    ctx->pc = 0x1d28d8u;
}
