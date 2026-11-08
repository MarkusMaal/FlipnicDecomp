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

// Function: FUN_0012f890
// Address: 0x12f890 - 0x12f9a8
void FUN_0012f890_0x12f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f890_0x12f890");
#endif

    switch (ctx->pc) {
        case 0x12f8f0u: goto label_12f8f0;
        case 0x12f90cu: goto label_12f90c;
        case 0x12f928u: goto label_12f928;
        case 0x12f930u: goto label_12f930;
        case 0x12f95cu: goto label_12f95c;
        case 0x12f96cu: goto label_12f96c;
        default: break;
    }

    ctx->pc = 0x12f890u;

    // 0x12f890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12f894: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x12f898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12f89c: 0x24633670  addiu       $v1, $v1, 0x3670
    ctx->pc = 0x12f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13936));
    // 0x12f8a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12f8a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12f8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12f8a8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12f8a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f8b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12f8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f8bc: 0x8f8284b0  lw          $v0, -0x7B50($gp)
    ctx->pc = 0x12f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
    // 0x12f8c0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x12f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12f8c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f8c8: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x12f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f8cc: 0xaf8284b0  sw          $v0, -0x7B50($gp)
    ctx->pc = 0x12f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 2));
    // 0x12f8d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12f8d4: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F8D4u;
    {
        const bool branch_taken_0x12f8d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8D4u;
        // 0x12f8d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8d4) {
            ctx->pc = 0x12F8E8u;
            goto label_12f8e8;
        }
    }
    ctx->pc = 0x12F8DCu;
    // 0x12f8dc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12f8e0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12F8E0u;
    {
        const bool branch_taken_0x12f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8E0u;
        // 0x12f8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8e0) {
            ctx->pc = 0x12F988u;
            goto label_12f988;
        }
    }
    ctx->pc = 0x12F8E8u;
label_12f8e8:
    // 0x12f8e8: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x12F8E8u;
    SET_GPR_U32(ctx, 31, 0x12F8F0u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x12F8E8u, 0x12F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8F0u;
label_12f8f0:
    // 0x12f8f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F8F4u;
    {
        const bool branch_taken_0x12f8f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8F4u;
        // 0x12f8f8: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8f4) {
            ctx->pc = 0x12F904u;
            goto label_12f904;
        }
    }
    ctx->pc = 0x12F8FCu;
    // 0x12f8fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12F8FCu;
    {
        const bool branch_taken_0x12f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F8FCu;
        // 0x12f900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8fc) {
            ctx->pc = 0x12F988u;
            goto label_12f988;
        }
    }
    ctx->pc = 0x12F904u;
label_12f904:
    // 0x12f904: 0xc040168  jal         func_1005A0
    ctx->pc = 0x12F904u;
    SET_GPR_U32(ctx, 31, 0x12F90Cu);
    ctx->pc = 0x12F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F904u;
    // 0x12f908: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x12F904u, 0x12F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F90Cu;
label_12f90c:
    // 0x12f90c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12f910: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x12f910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12f914: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f918: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f91c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x12F91Cu;
    {
        const bool branch_taken_0x12f91c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F91Cu;
        // 0x12f920: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f91c) {
            ctx->pc = 0x12F94Cu;
            goto label_12f94c;
        }
    }
    ctx->pc = 0x12F924u;
    // 0x12f924: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12f928:
    // 0x12f928: 0xc04c0e0  jal         func_130380
    ctx->pc = 0x12F928u;
    SET_GPR_U32(ctx, 31, 0x12F930u);
    ctx->pc = 0x12F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F928u;
    // 0x12f92c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x12F928u, 0x12F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F930u;
label_12f930:
    // 0x12f930: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12f930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f934: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12f938: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12f93c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x12f940: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12f940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12f944: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F944u;
    {
        const bool branch_taken_0x12f944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F944u;
        // 0x12f948: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f944) {
            ctx->pc = 0x12F928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f928;
        }
    }
    ctx->pc = 0x12F94Cu;
label_12f94c:
    // 0x12f94c: 0x0  nop
    ctx->pc = 0x12f94cu;
    // NOP
    // 0x12f950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12f950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f954: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F954u;
    {
        const bool branch_taken_0x12f954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F954u;
        // 0x12f958: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f954) {
            ctx->pc = 0x12F974u;
            goto label_12f974;
        }
    }
    ctx->pc = 0x12F95Cu;
label_12f95c:
    // 0x12f95c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f960: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12f964: 0xc04be08  jal         func_12F820
    ctx->pc = 0x12F964u;
    SET_GPR_U32(ctx, 31, 0x12F96Cu);
    ctx->pc = 0x12F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F964u;
    // 0x12f968: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x12F964u, 0x12F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F96Cu;
label_12f96c:
    // 0x12f96c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12f970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12f974:
    // 0x12f974: 0x0  nop
    ctx->pc = 0x12f974u;
    // NOP
    // 0x12f978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f97c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x12f97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12f980: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12F980u;
    {
        const bool branch_taken_0x12f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F980u;
        // 0x12f984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f980) {
            ctx->pc = 0x12F95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f95c;
        }
    }
    ctx->pc = 0x12F988u;
label_12f988:
    // 0x12f988: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f98c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12f98cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12f990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12f994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f99c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f99cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9A0u;
        // 0x12f9a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F9A8u;
}
