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

// Function: entry_001b9fcc
// Address: 0x1b9fcc - 0x1ba050
void entry_001b9fcc_0x1b9fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9fcc_0x1b9fcc");
#endif

    ctx->pc = 0x1b9fccu;

    // 0x1b9fcc: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1b9fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1b9fd0: 0x902af4a0  lbu         $t2, -0xB60($at)
    ctx->pc = 0x1b9fd0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964384)));
    // 0x1b9fd4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x1b9fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b9fd8: 0x30690003  andi        $t1, $v1, 0x3
    ctx->pc = 0x1b9fd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b9fdc: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1b9fe0: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9fe4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b9fe8: 0x2404ffcf  addiu       $a0, $zero, -0x31
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1b9fec: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x1b9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x1b9ff0: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1b9ff4: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1b9ff4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1b9ff8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9ffc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1b9ffcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1ba000: 0xa028f4a0  sb          $t0, -0xB60($at)
    ctx->pc = 0x1ba000u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba004: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba008: 0x9028f4a0  lbu         $t0, -0xB60($at)
    ctx->pc = 0x1ba008u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba00c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1ba00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1ba010: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba014: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ba014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1ba018: 0xa026f4a0  sb          $a2, -0xB60($at)
    ctx->pc = 0x1ba018u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba01c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba020: 0x9026f4a0  lbu         $a2, -0xB60($at)
    ctx->pc = 0x1ba020u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba024: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1ba024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ba028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba02c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ba02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ba030: 0xa024f4a0  sb          $a0, -0xB60($at)
    ctx->pc = 0x1ba030u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F4A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F4A0u, _value); } while (0);
    // 0x1ba034: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba038: 0x9024f4a0  lbu         $a0, -0xB60($at)
    ctx->pc = 0x1ba038u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x36F4A0u));
    // 0x1ba03c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1ba03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ba040: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ba044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba048: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA048u;
    {
        const bool branch_taken_0x1ba048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA048u;
        // 0x1ba04c: 0xa022f4a0  sb          $v0, -0xB60($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294964384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba048) {
            ctx->pc = 0x1BA0D0u;
            return;
        }
    }
    ctx->pc = 0x1BA050u;
}
