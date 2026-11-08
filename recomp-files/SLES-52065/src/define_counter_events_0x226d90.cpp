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

// Function: define_counter_events
// Address: 0x226d90 - 0x226f48
void define_counter_events_0x226d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("define_counter_events_0x226d90");
#endif

    switch (ctx->pc) {
        case 0x226dbcu: goto label_226dbc;
        case 0x226dd4u: goto label_226dd4;
        case 0x226df8u: goto label_226df8;
        case 0x226e10u: goto label_226e10;
        case 0x226e34u: goto label_226e34;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e70u: goto label_226e70;
        case 0x226e88u: goto label_226e88;
        case 0x226eacu: goto label_226eac;
        case 0x226ec4u: goto label_226ec4;
        case 0x226ee8u: goto label_226ee8;
        case 0x226f00u: goto label_226f00;
        case 0x226f24u: goto label_226f24;
        case 0x226f3cu: goto label_226f3c;
        default: break;
    }

    ctx->pc = 0x226d90u;

    // 0x226d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226d94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226d98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226d9c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226da0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226da8: 0x2484d8e0  addiu       $a0, $a0, -0x2720
    ctx->pc = 0x226da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
    // 0x226dac: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226db0: 0x24c60168  addiu       $a2, $a2, 0x168
    ctx->pc = 0x226db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 360));
    // 0x226db4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226DB4u;
    SET_GPR_U32(ctx, 31, 0x226DBCu);
    ctx->pc = 0x226DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DB4u;
    // 0x226db8: 0x24e7a290  addiu       $a3, $a3, -0x5D70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226DB4u, 0x226DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DBCu;
label_226dbc:
    // 0x226dbc: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226dc0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226dc8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226dcc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226DCCu;
    SET_GPR_U32(ctx, 31, 0x226DD4u);
    ctx->pc = 0x226DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DCCu;
    // 0x226dd0: 0x24c6d8d0  addiu       $a2, $a2, -0x2730 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226DCCu, 0x226DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DD4u;
label_226dd4:
    // 0x226dd4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226dd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226ddc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226de0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226de4: 0x2484d920  addiu       $a0, $a0, -0x26E0
    ctx->pc = 0x226de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957344));
    // 0x226de8: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226dec: 0x24c60178  addiu       $a2, $a2, 0x178
    ctx->pc = 0x226decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 376));
    // 0x226df0: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226DF0u;
    SET_GPR_U32(ctx, 31, 0x226DF8u);
    ctx->pc = 0x226DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DF0u;
    // 0x226df4: 0x24e7a500  addiu       $a3, $a3, -0x5B00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226DF0u, 0x226DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DF8u;
label_226df8:
    // 0x226df8: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226dfc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e04: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226e08: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226E08u;
    SET_GPR_U32(ctx, 31, 0x226E10u);
    ctx->pc = 0x226E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E08u;
    // 0x226e0c: 0x24c6d910  addiu       $a2, $a2, -0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226E08u, 0x226E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E10u;
label_226e10:
    // 0x226e10: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226e14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226e18: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226e1c: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226e20: 0x2484d960  addiu       $a0, $a0, -0x26A0
    ctx->pc = 0x226e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957408));
    // 0x226e24: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226e28: 0x24c60188  addiu       $a2, $a2, 0x188
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 392));
    // 0x226e2c: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226E2Cu;
    SET_GPR_U32(ctx, 31, 0x226E34u);
    ctx->pc = 0x226E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E2Cu;
    // 0x226e30: 0x24e7a770  addiu       $a3, $a3, -0x5890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226E2Cu, 0x226E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E34u;
label_226e34:
    // 0x226e34: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226e38: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e40: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226e44: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226E44u;
    SET_GPR_U32(ctx, 31, 0x226E4Cu);
    ctx->pc = 0x226E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E44u;
    // 0x226e48: 0x24c6d950  addiu       $a2, $a2, -0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226E44u, 0x226E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E4Cu;
label_226e4c:
    // 0x226e4c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226e50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226e54: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226e58: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226e5c: 0x2484d9a0  addiu       $a0, $a0, -0x2660
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957472));
    // 0x226e60: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226e64: 0x24c60198  addiu       $a2, $a2, 0x198
    ctx->pc = 0x226e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 408));
    // 0x226e68: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226E68u;
    SET_GPR_U32(ctx, 31, 0x226E70u);
    ctx->pc = 0x226E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E68u;
    // 0x226e6c: 0x24e7a9e0  addiu       $a3, $a3, -0x5620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226E68u, 0x226E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E70u;
label_226e70:
    // 0x226e70: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226e74: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e7c: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226e80: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226E80u;
    SET_GPR_U32(ctx, 31, 0x226E88u);
    ctx->pc = 0x226E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E80u;
    // 0x226e84: 0x24c6d990  addiu       $a2, $a2, -0x2670 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226E80u, 0x226E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E88u;
label_226e88:
    // 0x226e88: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226e8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226e90: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226e94: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226e94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226e98: 0x2484d9e0  addiu       $a0, $a0, -0x2620
    ctx->pc = 0x226e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957536));
    // 0x226e9c: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226ea0: 0x24c601a8  addiu       $a2, $a2, 0x1A8
    ctx->pc = 0x226ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 424));
    // 0x226ea4: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226EA4u;
    SET_GPR_U32(ctx, 31, 0x226EACu);
    ctx->pc = 0x226EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EA4u;
    // 0x226ea8: 0x24e7abf0  addiu       $a3, $a3, -0x5410 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226EA4u, 0x226EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226eb0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb8: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226ebc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226EBCu;
    SET_GPR_U32(ctx, 31, 0x226EC4u);
    ctx->pc = 0x226EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EBCu;
    // 0x226ec0: 0x24c6d9d0  addiu       $a2, $a2, -0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226EBCu, 0x226EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EC4u;
label_226ec4:
    // 0x226ec4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226ec8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226ecc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226ed0: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226ed4: 0x2484da20  addiu       $a0, $a0, -0x25E0
    ctx->pc = 0x226ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957600));
    // 0x226ed8: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226edc: 0x24c601b8  addiu       $a2, $a2, 0x1B8
    ctx->pc = 0x226edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 440));
    // 0x226ee0: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226EE0u;
    SET_GPR_U32(ctx, 31, 0x226EE8u);
    ctx->pc = 0x226EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EE0u;
    // 0x226ee4: 0x24e7ae70  addiu       $a3, $a3, -0x5190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226EE0u, 0x226EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EE8u;
label_226ee8:
    // 0x226ee8: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226eec: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ef4: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226ef8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226EF8u;
    SET_GPR_U32(ctx, 31, 0x226F00u);
    ctx->pc = 0x226EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF8u;
    // 0x226efc: 0x24c6da10  addiu       $a2, $a2, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226EF8u, 0x226F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F00u;
label_226f00:
    // 0x226f00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x226f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x226f04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x226f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x226f08: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x226f0c: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x226f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x226f10: 0x2484da60  addiu       $a0, $a0, -0x25A0
    ctx->pc = 0x226f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957664));
    // 0x226f14: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x226f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x226f18: 0x24c601c8  addiu       $a2, $a2, 0x1C8
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 456));
    // 0x226f1c: 0xc064028  jal         func_1900A0
    ctx->pc = 0x226F1Cu;
    SET_GPR_U32(ctx, 31, 0x226F24u);
    ctx->pc = 0x226F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F1Cu;
    // 0x226f20: 0x24e7b770  addiu       $a3, $a3, -0x4890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1900A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900A0u, 0x226F1Cu, 0x226F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F24u;
label_226f24:
    // 0x226f24: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x226f28: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x226f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f30: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x226f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x226f34: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x226F34u;
    SET_GPR_U32(ctx, 31, 0x226F3Cu);
    ctx->pc = 0x226F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F34u;
    // 0x226f38: 0x24c6da50  addiu       $a2, $a2, -0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x226F34u, 0x226F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F3Cu;
label_226f3c:
    // 0x226f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f40: 0x3e00008  jr          $ra
    ctx->pc = 0x226F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F40u;
        // 0x226f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226F48u;
}
