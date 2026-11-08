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

// Function: entry_001b3588
// Address: 0x1b3588 - 0x1b368c
void entry_001b3588_0x1b3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3588_0x1b3588");
#endif

    switch (ctx->pc) {
        case 0x1b3590u: goto label_1b3590;
        case 0x1b365cu: goto label_1b365c;
        default: break;
    }

    ctx->pc = 0x1b3588u;

    // 0x1b3588: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1B3588u;
    SET_GPR_U32(ctx, 31, 0x1B3590u);
    ctx->pc = 0x1B358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3588u;
    // 0x1b358c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1B3588u, 0x1B3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3590u;
label_1b3590:
    // 0x1b3590: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1b3590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b3594: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1b3598: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b359c: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1b35a0: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1b35a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b35a4: 0x34580004  ori         $t8, $v0, 0x4
    ctx->pc = 0x1b35a4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1b35a8: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x1b35a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x1b35ac: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x1b35acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1b35b0: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1b35b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b35b4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x1b35b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b35b8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1b35bc: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1b35bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b35c0: 0xffa50020  sd          $a1, 0x20($sp)
    ctx->pc = 0x1b35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 5));
    // 0x1b35c4: 0x344f0004  ori         $t7, $v0, 0x4
    ctx->pc = 0x1b35c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1b35c8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1b35c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x1b35cc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1b35d0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1b35d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b35d4: 0x344e1001  ori         $t6, $v0, 0x1001
    ctx->pc = 0x1b35d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1b35d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b35dc: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b35e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b35e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b35e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b35e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35e8: 0x240200a4  addiu       $v0, $zero, 0xA4
    ctx->pc = 0x1b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x1b35ec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1b35ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35f0: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x1b35f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b35f4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1b35f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b35f8: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1b35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1b35fc: 0xfe180000  sd          $t8, 0x0($s0)
    ctx->pc = 0x1b35fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 24));
    // 0x1b3600: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3604: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b3604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b3608: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b360c: 0xac4f000c  sw          $t7, 0xC($v0)
    ctx->pc = 0x1b360cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 15));
    // 0x1b3610: 0x7baf0020  lq          $t7, 0x20($sp)
    ctx->pc = 0x1b3610u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3618: 0x7c4f0010  sq          $t7, 0x10($v0)
    ctx->pc = 0x1b3618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 15));
    // 0x1b361c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3620: 0xfc4e0020  sd          $t6, 0x20($v0)
    ctx->pc = 0x1b3620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 14));
    // 0x1b3624: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3628: 0xfc4d0028  sd          $t5, 0x28($v0)
    ctx->pc = 0x1b3628u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 13));
    // 0x1b362c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3630: 0xfc4c0030  sd          $t4, 0x30($v0)
    ctx->pc = 0x1b3630u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 12));
    // 0x1b3634: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3638: 0xfc4b0038  sd          $t3, 0x38($v0)
    ctx->pc = 0x1b3638u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 11));
    // 0x1b363c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3640: 0xfc4a0040  sd          $t2, 0x40($v0)
    ctx->pc = 0x1b3640u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 10));
    // 0x1b3644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3648: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x1b3648u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x1b364c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3650: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1b3654: 0xc06ccf8  jal         func_1B33E0
    ctx->pc = 0x1B3654u;
    SET_GPR_U32(ctx, 31, 0x1B365Cu);
    ctx->pc = 0x1B3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3654u;
    // 0x1b3658: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B33E0u, 0x1B3654u, 0x1B365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B365Cu;
label_1b365c:
    // 0x1b365c: 0x8f848358  lw          $a0, -0x7CA8($gp)
    ctx->pc = 0x1b365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x1b3660: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B3660u;
    {
        const bool branch_taken_0x1b3660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3660u;
        // 0x1b3664: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3660) {
            ctx->pc = 0x1B36B0u;
            return;
        }
    }
    ctx->pc = 0x1B3668u;
    // 0x1b3668: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1b3668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b366c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3670: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b3670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b3674: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b3678: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3678u;
    {
        const bool branch_taken_0x1b3678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3678u;
        // 0x1b367c: 0x8f83835c  lw          $v1, -0x7CA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3678) {
            ctx->pc = 0x1B368Cu;
            return;
        }
    }
    ctx->pc = 0x1B3680u;
    // 0x1b3680: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b3684: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b3688: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b368cu;
}
