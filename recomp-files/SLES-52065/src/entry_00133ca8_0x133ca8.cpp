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

// Function: entry_00133ca8
// Address: 0x133ca8 - 0x133d70
void entry_00133ca8_0x133ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133ca8_0x133ca8");
#endif

    switch (ctx->pc) {
        case 0x133cb0u: goto label_133cb0;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cc4u: goto label_133cc4;
        case 0x133cdcu: goto label_133cdc;
        case 0x133d14u: goto label_133d14;
        case 0x133d34u: goto label_133d34;
        case 0x133d54u: goto label_133d54;
        default: break;
    }

    ctx->pc = 0x133ca8u;

label_133ca8:
    // 0x133ca8: 0xc080702  jal         func_201C08
label_133cac:
    if (ctx->pc == 0x133CACu) {
        ctx->pc = 0x133CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CA8u;
        // 0x133cac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CB0u;
        goto label_133cb0;
    }
    ctx->pc = 0x133CA8u;
    SET_GPR_U32(ctx, 31, 0x133CB0u);
    ctx->pc = 0x133CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CA8u;
    // 0x133cac: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133CA8u, 0x133CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CB0u;
label_133cb0:
    // 0x133cb0: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_133cb4:
    // 0x133cb4: 0xc080702  jal         func_201C08
label_133cb8:
    if (ctx->pc == 0x133CB8u) {
        ctx->pc = 0x133CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CB4u;
        // 0x133cb8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CBCu;
        goto label_133cbc;
    }
    ctx->pc = 0x133CB4u;
    SET_GPR_U32(ctx, 31, 0x133CBCu);
    ctx->pc = 0x133CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CB4u;
    // 0x133cb8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133CB4u, 0x133CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0xc04c0e0  jal         func_130380
label_133cc0:
    if (ctx->pc == 0x133CC0u) {
        ctx->pc = 0x133CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CBCu;
        // 0x133cc0: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CC4u;
        goto label_133cc4;
    }
    ctx->pc = 0x133CBCu;
    SET_GPR_U32(ctx, 31, 0x133CC4u);
    ctx->pc = 0x133CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CBCu;
    // 0x133cc0: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x133CBCu, 0x133CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC4u;
label_133cc4:
    // 0x133cc4: 0xafa202f8  sw          $v0, 0x2F8($sp)
    ctx->pc = 0x133cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 2));
label_133cc8:
    // 0x133cc8: 0x8fa502f8  lw          $a1, 0x2F8($sp)
    ctx->pc = 0x133cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133ccc:
    // 0x133ccc: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_133cd0:
    if (ctx->pc == 0x133CD0u) {
        ctx->pc = 0x133CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CCCu;
        // 0x133cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133CD4u;
        goto label_133cd4;
    }
    ctx->pc = 0x133CCCu;
    {
        const bool branch_taken_0x133ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CCCu;
        // 0x133cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ccc) {
            ctx->pc = 0x133D70u;
            return;
        }
    }
    ctx->pc = 0x133CD4u;
label_133cd4:
    // 0x133cd4: 0xc04c558  jal         func_131560
label_133cd8:
    if (ctx->pc == 0x133CD8u) {
        ctx->pc = 0x133CDCu;
        goto label_133cdc;
    }
    ctx->pc = 0x133CD4u;
    SET_GPR_U32(ctx, 31, 0x133CDCu);
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x133CD4u, 0x133CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CDCu;
label_133cdc:
    // 0x133cdc: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133ce0:
    // 0x133ce0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_133ce4:
    // 0x133ce4: 0x8fa302f8  lw          $v1, 0x2F8($sp)
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133ce8:
    // 0x133ce8: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x133ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
label_133cec:
    // 0x133cec: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x133cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
label_133cf0:
    // 0x133cf0: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x133cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_133cf4:
    // 0x133cf4: 0x8e830084  lw          $v1, 0x84($s4)
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133cf8:
    // 0x133cf8: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_133cfc:
    // 0x133cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_133d00:
    // 0x133d00: 0xac6200e4  sw          $v0, 0xE4($v1)
    ctx->pc = 0x133d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
label_133d04:
    // 0x133d04: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x133d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_133d08:
    // 0x133d08: 0x245100e8  addiu       $s1, $v0, 0xE8
    ctx->pc = 0x133d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_133d0c:
    // 0x133d0c: 0xc049ed0  jal         func_127B40
label_133d10:
    if (ctx->pc == 0x133D10u) {
        ctx->pc = 0x133D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D0Cu;
        // 0x133d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D14u;
        goto label_133d14;
    }
    ctx->pc = 0x133D0Cu;
    SET_GPR_U32(ctx, 31, 0x133D14u);
    ctx->pc = 0x133D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D0Cu;
    // 0x133d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x133D0Cu, 0x133D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D14u;
label_133d14:
    // 0x133d14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x133d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_133d18:
    // 0x133d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133d1c:
    // 0x133d1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_133d20:
    // 0x133d20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d24:
    // 0x133d24: 0x27a702f8  addiu       $a3, $sp, 0x2F8
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_133d28:
    // 0x133d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_133d2c:
    // 0x133d2c: 0xc0484ec  jal         func_1213B0
label_133d30:
    if (ctx->pc == 0x133D30u) {
        ctx->pc = 0x133D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D2Cu;
        // 0x133d30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D34u;
        goto label_133d34;
    }
    ctx->pc = 0x133D2Cu;
    SET_GPR_U32(ctx, 31, 0x133D34u);
    ctx->pc = 0x133D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D2Cu;
    // 0x133d30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x133D2Cu, 0x133D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D34u;
label_133d34:
    // 0x133d34: 0x8fa302f8  lw          $v1, 0x2F8($sp)
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_133d38:
    // 0x133d38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_133d3c:
    // 0x133d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d40:
    // 0x133d40: 0xae830088  sw          $v1, 0x88($s4)
    ctx->pc = 0x133d40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
label_133d44:
    // 0x133d44: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x133d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_133d48:
    // 0x133d48: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x133d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_133d4c:
    // 0x133d4c: 0xc080874  jal         func_2021D0
label_133d50:
    if (ctx->pc == 0x133D50u) {
        ctx->pc = 0x133D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D4Cu;
        // 0x133d50: 0x24a5ee58  addiu       $a1, $a1, -0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D54u;
        goto label_133d54;
    }
    ctx->pc = 0x133D4Cu;
    SET_GPR_U32(ctx, 31, 0x133D54u);
    ctx->pc = 0x133D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D4Cu;
    // 0x133d50: 0x24a5ee58  addiu       $a1, $a1, -0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x133D4Cu, 0x133D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D54u;
label_133d54:
    // 0x133d54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_133d58:
    if (ctx->pc == 0x133D58u) {
        ctx->pc = 0x133D5Cu;
        goto label_133d5c;
    }
    ctx->pc = 0x133D54u;
    {
        const bool branch_taken_0x133d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d54) {
            ctx->pc = 0x133D70u;
            return;
        }
    }
    ctx->pc = 0x133D5Cu;
label_133d5c:
    // 0x133d5c: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x133d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_133d60:
    // 0x133d60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_133d64:
    // 0x133d64: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x133d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_133d68:
    // 0x133d68: 0x320f809  jalr        $t9
label_133d6c:
    if (ctx->pc == 0x133D6Cu) {
        ctx->pc = 0x133D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D68u;
        // 0x133d6c: 0x8fa502f8  lw          $a1, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D70u;
        goto label_fallthrough_0x133d68;
    }
    ctx->pc = 0x133D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133D70u);
        ctx->pc = 0x133D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D68u;
        // 0x133d6c: 0x8fa502f8  lw          $a1, 0x2F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D68u, 0x133D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x133d68:
    ctx->pc = 0x133D70u;
}
