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

// Function: FUN_00101cd0
// Address: 0x101cd0 - 0x101e84
void FUN_00101cd0_0x101cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101cd0_0x101cd0");
#endif

    switch (ctx->pc) {
        case 0x101d08u: goto label_101d08;
        case 0x101d28u: goto label_101d28;
        case 0x101d34u: goto label_101d34;
        case 0x101d58u: goto label_101d58;
        case 0x101d80u: goto label_101d80;
        case 0x101da4u: goto label_101da4;
        case 0x101dc8u: goto label_101dc8;
        case 0x101e00u: goto label_101e00;
        case 0x101e14u: goto label_101e14;
        default: break;
    }

    ctx->pc = 0x101cd0u;

    // 0x101cd0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x101cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x101cd4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101cd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x101cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101cdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101ce0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x101ce4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101ce8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x101ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101cf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x101cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cf4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x101cf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x101cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cfc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x101cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x101d00: 0xc040168  jal         func_1005A0
    ctx->pc = 0x101D00u;
    SET_GPR_U32(ctx, 31, 0x101D08u);
    ctx->pc = 0x101D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D00u;
    // 0x101d04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x101D00u, 0x101D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D08u;
label_101d08:
    // 0x101d08: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x101d0c: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x101d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x101d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d14: 0x24a52690  addiu       $a1, $a1, 0x2690
    ctx->pc = 0x101d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
    // 0x101d18: 0x24c62980  addiu       $a2, $a2, 0x2980
    ctx->pc = 0x101d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10624));
    // 0x101d1c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x101d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x101d20: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x101D20u;
    SET_GPR_U32(ctx, 31, 0x101D28u);
    ctx->pc = 0x101D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D20u;
    // 0x101d24: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x101D20u, 0x101D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D28u;
label_101d28:
    // 0x101d28: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x101d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x101d2c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x101D2Cu;
    {
        const bool branch_taken_0x101d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D2Cu;
        // 0x101d30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d2c) {
            ctx->pc = 0x101E60u;
            goto label_101e60;
        }
    }
    ctx->pc = 0x101D34u;
label_101d34:
    // 0x101d34: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x101d44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d50: 0xc04cda8  jal         func_1336A0
    ctx->pc = 0x101D50u;
    SET_GPR_U32(ctx, 31, 0x101D58u);
    ctx->pc = 0x101D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D50u;
    // 0x101d54: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1336A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1336A0u, 0x101D50u, 0x101D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D58u;
label_101d58:
    // 0x101d58: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d60: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x101d68: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d6c: 0x24a5e000  addiu       $a1, $a1, -0x2000
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959104));
    // 0x101d70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d78: 0xc04cb0c  jal         func_132C30
    ctx->pc = 0x101D78u;
    SET_GPR_U32(ctx, 31, 0x101D80u);
    ctx->pc = 0x101D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D78u;
    // 0x101d7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132C30u, 0x101D78u, 0x101D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D80u;
label_101d80:
    // 0x101d80: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101d84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101d88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x101d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x101d90: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101d94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101d98: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101d9c: 0xc04cd30  jal         func_1334C0
    ctx->pc = 0x101D9Cu;
    SET_GPR_U32(ctx, 31, 0x101DA4u);
    ctx->pc = 0x101DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D9Cu;
    // 0x101da0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334C0u, 0x101D9Cu, 0x101DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DA4u;
label_101da4:
    // 0x101da4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x101da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101da8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x101da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101dac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101db4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x101db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101db8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x101db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x101dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101dc0: 0xc04ce04  jal         func_133810
    ctx->pc = 0x101DC0u;
    SET_GPR_U32(ctx, 31, 0x101DC8u);
    ctx->pc = 0x101DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101DC0u;
    // 0x101dc4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133810u, 0x101DC0u, 0x101DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DC8u;
label_101dc8:
    // 0x101dc8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x101dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x101dcc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101dd0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x101dd4: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x101dd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x101ddc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x101ddcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101de0: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x101de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x101de4: 0x2508f388  addiu       $t0, $t0, -0xC78
    ctx->pc = 0x101de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964104));
    // 0x101de8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x101de8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101dec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x101decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x101df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x101df4: 0x8c6d0010  lw          $t5, 0x10($v1)
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x101df8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x101DF8u;
    {
        const bool branch_taken_0x101df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DF8u;
        // 0x101dfc: 0x2484f3a0  addiu       $a0, $a0, -0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101df8) {
            ctx->pc = 0x101E50u;
            goto label_101e50;
        }
    }
    ctx->pc = 0x101E00u;
label_101e00:
    // 0x101e00: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x101e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x101e04: 0x6a4821  addu        $t1, $v1, $t2
    ctx->pc = 0x101e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x101e08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x101e08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101E0Cu;
    {
        const bool branch_taken_0x101e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E0Cu;
        // 0x101e10: 0x1093821  addu        $a3, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e0c) {
            ctx->pc = 0x101E40u;
            goto label_101e40;
        }
    }
    ctx->pc = 0x101E14u;
label_101e14:
    // 0x101e14: 0x0  nop
    ctx->pc = 0x101e14u;
    // NOP
    // 0x101e18: 0x1671821  addu        $v1, $t3, $a3
    ctx->pc = 0x101e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x101e1c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x101e1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e20: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x101e24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x101e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x101e28: 0x1a36021  addu        $t4, $t5, $v1
    ctx->pc = 0x101e28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x101e2c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x101e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101e30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101e34: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x101e34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e38: 0x7d860000  sq          $a2, 0x0($t4)
    ctx->pc = 0x101e38u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 6));
    // 0x101e3c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x101e3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_101e40:
    // 0x101e40: 0x29630003  slti        $v1, $t3, 0x3
    ctx->pc = 0x101e40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x101e44: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x101E44u;
    {
        const bool branch_taken_0x101e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e44) {
            ctx->pc = 0x101E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e14;
        }
    }
    ctx->pc = 0x101E4Cu;
    // 0x101e4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x101e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_101e50:
    // 0x101e50: 0x29430004  slti        $v1, $t2, 0x4
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x101e54: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x101E54u;
    {
        const bool branch_taken_0x101e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e54) {
            ctx->pc = 0x101E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101e00;
        }
    }
    ctx->pc = 0x101E5Cu;
    // 0x101e5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_101e60:
    // 0x101e60: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x101e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101e64: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x101E64u;
    {
        const bool branch_taken_0x101e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101e64) {
            ctx->pc = 0x101D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101d34;
        }
    }
    ctx->pc = 0x101E6Cu;
    // 0x101e6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101e70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101e70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101e74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x101E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E7Cu;
        // 0x101e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101E84u;
}
