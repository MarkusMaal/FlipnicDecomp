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

// Function: entry_00136a38
// Address: 0x136a38 - 0x136ae4
void entry_00136a38_0x136a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a38_0x136a38");
#endif

    switch (ctx->pc) {
        case 0x136a40u: goto label_136a40;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a54u: goto label_136a54;
        case 0x136a64u: goto label_136a64;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a74u: goto label_136a74;
        case 0x136ad0u: goto label_136ad0;
        case 0x136ad8u: goto label_136ad8;
        case 0x136ae0u: goto label_136ae0;
        default: break;
    }

    ctx->pc = 0x136a38u;

    // 0x136a38: 0xc060b8c  jal         func_182E30
    ctx->pc = 0x136A38u;
    SET_GPR_U32(ctx, 31, 0x136A40u);
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136A38u, 0x136A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A40u;
label_136a40:
    // 0x136a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a44: 0xc053c54  jal         func_14F150
    ctx->pc = 0x136A44u;
    SET_GPR_U32(ctx, 31, 0x136A4Cu);
    ctx->pc = 0x136A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A44u;
    // 0x136a48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136A44u, 0x136A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A4Cu;
label_136a4c:
    // 0x136a4c: 0xc061918  jal         func_186460
    ctx->pc = 0x136A4Cu;
    SET_GPR_U32(ctx, 31, 0x136A54u);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136A4Cu, 0x136A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A54u;
label_136a54:
    // 0x136a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a5c: 0xc061968  jal         func_1865A0
    ctx->pc = 0x136A5Cu;
    SET_GPR_U32(ctx, 31, 0x136A64u);
    ctx->pc = 0x136A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A5Cu;
    // 0x136a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136A5Cu, 0x136A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A64u;
label_136a64:
    // 0x136a64: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x136A64u;
    SET_GPR_U32(ctx, 31, 0x136A6Cu);
    ctx->pc = 0x136A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A64u;
    // 0x136a68: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x136A64u, 0x136A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0xc061c5c  jal         func_187170
    ctx->pc = 0x136A6Cu;
    SET_GPR_U32(ctx, 31, 0x136A74u);
    ctx->pc = 0x136A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A6Cu;
    // 0x136a70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136A6Cu, 0x136A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A74u;
label_136a74:
    // 0x136a74: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136a78: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x136a7c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x136a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x136a80: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x136a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x136a84: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x136a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    // 0x136a88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x136a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x136a90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x136a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x136a94: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x136a94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x136a98: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x136a98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x136a9c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x136a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x136aa0: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x136aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x136aa4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x136aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x136aa8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x136aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x136aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x136aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136ab0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x136ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x136ab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x136ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x136ab8: 0x93828550  lbu         $v0, -0x7AB0($gp)
    ctx->pc = 0x136ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935888)));
    // 0x136abc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x136ABCu;
    {
        const bool branch_taken_0x136abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ABCu;
        // 0x136ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136abc) {
            ctx->pc = 0x136AE4u;
            return;
        }
    }
    ctx->pc = 0x136AC4u;
    // 0x136ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ac8: 0xc04c5a4  jal         func_131690
    ctx->pc = 0x136AC8u;
    SET_GPR_U32(ctx, 31, 0x136AD0u);
    ctx->pc = 0x136ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC8u;
    // 0x136acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131690u, 0x136AC8u, 0x136AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD0u;
label_136ad0:
    // 0x136ad0: 0xc04dba4  jal         func_136E90
    ctx->pc = 0x136AD0u;
    SET_GPR_U32(ctx, 31, 0x136AD8u);
    ctx->pc = 0x136AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD0u;
    // 0x136ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136AD0u, 0x136AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD8u;
label_136ad8:
    // 0x136ad8: 0xc04ce08  jal         func_133820
    ctx->pc = 0x136AD8u;
    SET_GPR_U32(ctx, 31, 0x136AE0u);
    ctx->pc = 0x136ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD8u;
    // 0x136adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133820u, 0x136AD8u, 0x136AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AE0u;
label_136ae0:
    // 0x136ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136ae4u;
}
