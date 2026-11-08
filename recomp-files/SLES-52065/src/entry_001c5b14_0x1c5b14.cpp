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

// Function: entry_001c5b14
// Address: 0x1c5b14 - 0x1c5b78
void entry_001c5b14_0x1c5b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5b14_0x1c5b14");
#endif

    switch (ctx->pc) {
        case 0x1c5b20u: goto label_1c5b20;
        case 0x1c5b38u: goto label_1c5b38;
        default: break;
    }

    ctx->pc = 0x1c5b14u;

    // 0x1c5b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b18: 0xc06d100  jal         func_1B4400
    ctx->pc = 0x1C5B18u;
    SET_GPR_U32(ctx, 31, 0x1C5B20u);
    ctx->pc = 0x1C5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B18u;
    // 0x1c5b1c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1C5B18u, 0x1C5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B20u;
label_1c5b20:
    // 0x1c5b20: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1c5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c5b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5b2c: 0xa022f280  sb          $v0, -0xD80($at)
    ctx->pc = 0x1c5b2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F280u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F280u, _value); } while (0);
    // 0x1c5b30: 0xc06f904  jal         func_1BE410
    ctx->pc = 0x1C5B30u;
    SET_GPR_U32(ctx, 31, 0x1C5B38u);
    ctx->pc = 0x1C5B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5B30u;
    // 0x1c5b34: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE410u, 0x1C5B30u, 0x1C5B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B38u;
label_1c5b38:
    // 0x1c5b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c5b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c5b3c: 0xa020f280  sb          $zero, -0xD80($at)
    ctx->pc = 0x1c5b3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F280u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F280u, _value); } while (0);
    // 0x1c5b40: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5b44: 0x8c24c6c0  lw          $a0, -0x3940($at)
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6C0u));
    // 0x1c5b48: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C5B48u;
    {
        const bool branch_taken_0x1c5b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B48u;
        // 0x1c5b4c: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b48) {
            ctx->pc = 0x1C5B9Cu;
            return;
        }
    }
    ctx->pc = 0x1C5B50u;
    // 0x1c5b50: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c5b54: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1c5b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1c5b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c5b5c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1c5b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1c5b60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c5b64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5B64u;
    {
        const bool branch_taken_0x1c5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B64u;
        // 0x1c5b68: 0x8c23c6c4  lw          $v1, -0x393C($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b64) {
            ctx->pc = 0x1C5B78u;
            return;
        }
    }
    ctx->pc = 0x1C5B6Cu;
    // 0x1c5b6c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1c5b70: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1c5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1c5b74: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1c5b78u;
}
