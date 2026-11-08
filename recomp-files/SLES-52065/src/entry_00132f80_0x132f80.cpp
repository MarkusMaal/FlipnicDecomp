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

// Function: entry_00132f80
// Address: 0x132f80 - 0x13301c
void entry_00132f80_0x132f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132f80_0x132f80");
#endif

    switch (ctx->pc) {
        case 0x132ffcu: goto label_132ffc;
        default: break;
    }

    ctx->pc = 0x132f80u;

    // 0x132f80: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132f84: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x132f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x132f88: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x132f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x132f8c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x132f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x132f90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x132f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x132f94: 0xfc226308  sd          $v0, 0x6308($at)
    ctx->pc = 0x132f94u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 25352), GPR_U64(ctx, 2));
    // 0x132f98: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132f9c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x132f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x132fa0: 0xfc236300  sd          $v1, 0x6300($at)
    ctx->pc = 0x132fa0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B6300u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6300u, _value); } while (0);
    // 0x132fa4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fa8: 0xfc226328  sd          $v0, 0x6328($at)
    ctx->pc = 0x132fa8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6328u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6328u, _value); } while (0);
    // 0x132fac: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x132facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x132fb0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fb4: 0xfc226318  sd          $v0, 0x6318($at)
    ctx->pc = 0x132fb4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6318u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6318u, _value); } while (0);
    // 0x132fb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x132fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x132fbc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fc0: 0xfc226338  sd          $v0, 0x6338($at)
    ctx->pc = 0x132fc0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6338u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6338u, _value); } while (0);
    // 0x132fc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x132fc8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fcc: 0xfc226348  sd          $v0, 0x6348($at)
    ctx->pc = 0x132fccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6348u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6348u, _value); } while (0);
    // 0x132fd0: 0xde220048  ld          $v0, 0x48($s1)
    ctx->pc = 0x132fd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x132fd4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fd8: 0xfc226310  sd          $v0, 0x6310($at)
    ctx->pc = 0x132fd8u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6310u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6310u, _value); } while (0);
    // 0x132fdc: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x132fdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x132fe0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x132fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x132fe4: 0xfc226320  sd          $v0, 0x6320($at)
    ctx->pc = 0x132fe4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6320u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6320u, _value); } while (0);
    // 0x132fe8: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x132fec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x132FECu;
    {
        const bool branch_taken_0x132fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fec) {
            ctx->pc = 0x13301Cu;
            return;
        }
    }
    ctx->pc = 0x132FF4u;
    // 0x132ff4: 0xc0485c0  jal         func_121700
    ctx->pc = 0x132FF4u;
    SET_GPR_U32(ctx, 31, 0x132FFCu);
    ctx->pc = 0x132FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FF4u;
    // 0x132ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x132FF4u, 0x132FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FFCu;
label_132ffc:
    // 0x132ffc: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x133000: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133004: 0xdc420060  ld          $v0, 0x60($v0)
    ctx->pc = 0x133004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x133008: 0xfc226330  sd          $v0, 0x6330($at)
    ctx->pc = 0x133008u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6330u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6330u, _value); } while (0);
    // 0x13300c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x13300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x133010: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x133014: 0xdc420068  ld          $v0, 0x68($v0)
    ctx->pc = 0x133014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x133018: 0xfc226340  sd          $v0, 0x6340($at)
    ctx->pc = 0x133018u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B6340u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B6340u, _value); } while (0);
    ctx->pc = 0x13301cu;
}
